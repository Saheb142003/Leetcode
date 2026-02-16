#include<bitset>
class Solution {
public:
    int reverseBits(int n) {
        bitset<32>binaryRep(n);
        string s=binaryRep.to_string();
        reverse(s.begin(),s.end());
        bitset<32>reversed(s);
        return reversed.to_ulong();
    }
};