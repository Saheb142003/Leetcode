class Solution {
public:
    string dectobin(int n){
        if(n==0) return "0";
        string ans="";
        while(n>0){
            int rem=n%2;
            ans.push_back(rem+'0');
            n/=2;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
    int bintodec(string s){
        int ans = 0;
        for (char c : s) {
            ans = ans * 2 + (c - '0');
        }
        return ans;
    }
    vector<int> sortByReflection(vector<int>& nums) {
        vector<pair<int,int>>ans;
        for(auto i:nums){ // [3,6,5,8]

            string a=dectobin(i); // [11,110,101,1000]

            reverse(a.begin(),a.end()); // [11,011,101,0001]
            
           ans.push_back({bintodec(a),i});  // [(3,3),(3,6),(5,5),(1,8)]
        }
        vector<int>res;
        sort(ans.begin(),ans.end());     //[(1,8),(3,3),(3,6),(5,5)]
        for(int i=0;i<ans.size();i++){
            res.push_back(ans[i].second); // [8,3,6,5]
        }
        
        return res;
    }
};