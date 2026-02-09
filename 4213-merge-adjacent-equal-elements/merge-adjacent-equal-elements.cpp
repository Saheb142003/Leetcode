class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        stack<long long>st;
        vector<long long>ans;
        int n=nums.size();
        // 10 5 1 2 2
        st.push(nums[0]);
        for(int i=1;i<n;i++){
            long long val=nums[i];
            while(st.size()>0 and st.top()==val){
                st.pop();
                val=val*2LL;
            }
            st.push(val);
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};