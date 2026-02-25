class Solution {
public:
    int countOneBits(int a){
        int count=0;
        while(a>0){
            int x=a%2;
            count+=x;
            a/=2;
        }
        return count;
    }
    vector<int> sortByBits(vector<int>& arr) {
        auto lambda=[&](int &a,int &b){
            int ca=countOneBits(a);
            int cb=countOneBits(b);
            if(ca==cb)return a<b;
            return ca<cb;
        };
        sort(arr.begin(),arr.end(),lambda);
        return arr;
    }
};