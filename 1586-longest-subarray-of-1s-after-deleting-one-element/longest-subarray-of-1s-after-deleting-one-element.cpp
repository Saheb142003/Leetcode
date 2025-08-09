class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i=0,j=0;
        int ans=0,count=0;
        while(i<nums.size()){
            if(nums[i]==0) count++;
            i++;
            while(count>1 and j<i){
                if(nums[j]==0) count--;
                j++;
            } 
            ans=max(ans,i-j-1);
        }
        return ans;
    }

};

