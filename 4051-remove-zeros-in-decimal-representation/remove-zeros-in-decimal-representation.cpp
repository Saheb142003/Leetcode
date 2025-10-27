class Solution {
public:
    long long removeZeros(long long n) {
        string num=to_string(n);
        int i=0;
        do{
            if(num[i]=='0'){
                num.erase(i,1);
                i--;
            }
            i++;
        }while(i<=num.length());
        return stoll(num);
    }
};