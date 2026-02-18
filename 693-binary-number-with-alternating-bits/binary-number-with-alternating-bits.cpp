class Solution {
public:
    bool hasAlternatingBits(int n) {
        bool temp=n%2;
        n/=2;
        while(n>0){
            if(n%2==temp){
                return false;
            }
            temp=n%2;
            n/=2;
        }
        return true;
    }
};