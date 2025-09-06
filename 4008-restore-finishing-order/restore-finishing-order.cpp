class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        int m=friends.size();
        unordered_map<int,int>mp;
        for(auto i:friends){
            mp[i]++;
        }
        int x=0;
        for(int i=0;i<order.size();i++){
            if(mp.find(order[i])!=mp.end()){
                friends[x]=order[i];
                x++;
            }
        }
        return friends;
    }
};