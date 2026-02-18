class Solution {
public:
    bool hasAlternatingBits(int n) {
       bitset<32>bin(n);
       
       for(int i=log2(n);i>0;i--){
        if(bin[i]==bin[i-1]){
            return false;
        }
       }
       return true;
    }
};