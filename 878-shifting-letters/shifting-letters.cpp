class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int n=shifts.size();
        vector<long long>sh(n);
        sh[n-1]=shifts[n-1];
        for(int i=n-2;i>=0;i--){
            sh[i]=sh[i+1]+shifts[i];
        }
        for(int i=0;i<s.size();i++){
            s[i]=char ('a'+ ((s[i]-'a')+sh[i]%26) %26);
            
        }
        
        return s;
    }
};