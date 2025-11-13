class Solution {
public:
    int maxOperations(string s) {
        int count=0,op=0;
        int n=s.length();
        int i=0;
        while(i<n){
            if(s[i]=='0'){
                op+=count;
                while(i<n and s[i]=='0') i++;
            }
            
            else {
                count++;
                i++;
            }
        }
        return op;
    }
};