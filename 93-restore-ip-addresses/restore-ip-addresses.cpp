class Solution {
public:
    vector<string>result;
    int n;
    bool isValid(string s){
        if(s[0]=='0' or stoi(s)>255){
            return false;
        }
        return true;

    }   
    void solve(string s,int i,int parts,string curr){
        if(i==n and parts==4){
            curr.pop_back();
            result.push_back(curr);
            return ;
        }
        if(i+1<=n){
            solve(s,i+1,parts+1,curr+s.substr(i,1)+".");
        }
        if(i+2<=n and isValid(s.substr(i,2))){
            solve(s,i+2,parts+1,curr+s.substr(i,2)+".");
        }
        if(i+3<=n and isValid(s.substr(i,3))){
            solve(s,i+3,parts+1,curr+s.substr(i,3)+".");
        }

    }
    vector<string> restoreIpAddresses(string s) {
         n=s.length();
        result.clear();
       if(n>12 and n<=3) return {""};
        int parts=0;
        string curr="";
        solve(s,0,parts,curr);
        return result;
    }
};