class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n=nums.size();
        int m=queries.size();
        sort(nums.begin(),nums.end());
        vector<int>ans(m);

        for(int i=1;i<n;i++){
            nums[i]+=nums[i-1];
        }

        for(int i=0;i<m;i++){
            int count=0;
           int s=0,e=n-1;
           while(s<=e){
                int mid=s+(e-s)/2;
                if(nums[mid]>queries[i]) e=mid-1;
                else{
                    count=mid+1; 
                    s=mid+1;
                }
           }        
            ans[i]=count;
        }
        return ans;
    }
};