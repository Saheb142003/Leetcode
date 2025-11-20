class Solution {
public:
typedef pair<int,int>P;
    int findsum(unordered_map<int,int>mp,int x){
        priority_queue<P,vector<P>,greater<P>>pq;
        for(auto &i:mp){
            pq.push({i.second,i.first});
            if(pq.size()>x){
                pq.pop();
            }
        }
        int sum=0;
        while(!pq.empty()){
            sum=sum+(pq.top().first*pq.top().second);
            pq.pop();
        }
        return sum;
        
            
    }
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int i=0,j=0;
        vector<int>result;
        unordered_map<int,int>mp;
        int n=nums.size();
        while(j<n){
           mp[nums[j]]++;
           if(j-i+1==k){
            result.push_back(findsum(mp,x));
            mp[nums[i]]--;
            if(mp[nums[i]]==0){
                mp.erase(nums[i]);
            }
            i++;
           }
           j++;
        }
        return result;
    }
};