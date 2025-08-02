class Solution {
    typedef pair<int,int>pa;
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int n=nums.size();
        for(int  i=0;i<n;i++){
            m[nums[i]]++;
        }
        priority_queue<pa,vector<pa>,greater<pa> > pq;
        for(auto ele:m){
            int f=ele.first;
            int s=ele.second;
            pq.push({s,f});
            if(pq.size()>k) pq.pop();
        }
        vector<int>ans;
        while(pq.size()>0){
            int s=pq.top().second;
            ans.push_back(s);
            pq.pop();
        }
        return ans;
    }
};