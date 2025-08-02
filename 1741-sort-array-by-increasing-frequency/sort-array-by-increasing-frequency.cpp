class Solution {
    typedef pair<int,int>p;
public:
    vector<int> frequencySort(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        priority_queue<p,vector<p>,greater<p>>pq;
        for(auto ele:mp){
            int f=ele.first;
            int s=ele.second;
            pq.push({s,-f});
        }
        vector<int>ans;
        while(pq.size()>0){
            pair<int,int>e=pq.top();
            int f=e.first;// frequency
            int s=e.second;// ele
            while(f--){
                ans.push_back(-s);
            }
            pq.pop();
        }
        return ans;
    }
};