class Solution {
public:
    int minOperations(string s) {
     int n=s.size();
     int count0=0,count1=0;
     char x='0';
     char y='1';
     int i=0;
    while(i<n){
        if(s[i]!=x){
            count0++;
        }
        if(s[i]!=y){
            count1++;
        }
        x=(x=='1')?'0':'1';
        y=(y=='1')?'0':'1';
        i++;
     }
     return min(count0,count1);
    }
};