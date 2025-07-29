class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n=nums.size();
        int m=queries.size();
        sort(nums.begin(),nums.end());
        vector<int>ans(m);
        for(int i=0;i<m;i++){
            int sum=0;
            int count=0;
            for(int j=0;j<n;j++){
                if(sum+nums[j]<=queries[i]){
                    count++;
                    sum+=nums[j];
                } 
            }        
            ans[i]=count;
        }
        return ans;
    }
};