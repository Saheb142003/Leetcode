class Solution {
    int solve(vector<int>nums,int ans,vector<int>arr,int idx){
        if(arr.size()==3 and ans%3==0){
            return ans;
        }
        if (idx >= nums.size()) return 0;

        arr.push_back(nums[idx]);
        int take = solve(nums, ans + nums[idx], arr, idx + 1);
        arr.pop_back();

        int skip = solve(nums, ans, arr, idx + 1);
        return max(take, skip);
    }
public:
    int maximumSum(vector<int>& nums) {
       /* sort(nums.begin(),nums.end());
        int ans=0;
        vector<int>arr;
        return solve(nums,ans,arr,0);
    */ 
     vector<int>rem0;
     vector<int>rem1;
     vector<int>rem2;

        for(int i=0;i<nums.size();i++){
            if(nums[i]%3==0){
                rem0.push_back(nums[i]);
            }
            else if(nums[i]%3==1){
                rem1.push_back(nums[i]);
            }
            else{
                rem2.push_back(nums[i]);
            }
        }
    sort(rem0.rbegin(), rem0.rend());
    sort(rem1.rbegin(), rem1.rend());
    sort(rem2.rbegin(), rem2.rend());

        //369
        int ans0=0,ans1=0,ans2=0,ans3=0,ans4=0,ans5=0,ans6=0;
        if(rem0.size()>=3){
            ans0 = rem0[0] + rem0[1] + rem0[2];
        }
        //159
        if(rem1.size()>=3){
            ans1 = rem1[0] + rem1[1] + rem1[2];
        }
        //246
        if(rem2.size()>=3){
           ans2 = rem2[0] + rem2[1] + rem2[2];
        }

        //456
        if(rem0.size()>=1 and rem2.size()>=1 and rem1.size()>=1){
            ans3+=rem0[0]+rem1[0]+rem2[0];
        }
        

        

        return max({ans0,ans1,ans2,ans3});
        
    }
};