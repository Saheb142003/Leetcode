class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i=0,j=-1,count=0,ans=0;
        int n=nums.size();
        while(i<n){
            if (nums[i]==0) count++;
            i++;
            while(count>1 and j<i){
                j++;
                if(nums[j]==0) count--;
            } 
            ans=max(ans,i-j-2);
        }
        return ans;
    }

};

