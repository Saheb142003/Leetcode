class Solution {
public:
    bool isGood(vector<int>& nums) {
        if(nums.size()<2) return false;
     int n=nums.size();
     map<int,int>mp;
     for(int i:nums){
        mp[i]++;
     }
     for(int i=1;i<=n-1;i++){
        if(mp.find(i)==mp.end()){
            return false;
        }
        if(i==n-1){
            if(mp[i]!=2) return false;
        }
        else{
            if(mp[i]!=1)return false;
        }
        
     }
    return true;
    }
};