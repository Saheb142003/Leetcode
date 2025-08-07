class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0,j=-1,count=0,ans=0;
        int n=nums.size();
        while(i<n){
            if(nums[i]==0) count++;
            i++; 
            while(count>k and j<i){
                j++;
                if(nums[j]==0) count--;
            }
            ans=max(ans,i-j-1);        
        }
        return ans;
    }
};