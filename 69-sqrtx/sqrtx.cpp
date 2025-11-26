class Solution {
public:
    int mySqrt(int x) {
        int ans=1;
        int i=1;int j=x/2;
        if(x==0) return 0;
        while(i<=j){
            int mid=i+(j-i)/2;
            long long sq = 1LL * mid * mid;
            if(sq<x){
                ans=mid;
                i=mid+1;
            }
            else if(sq==x){
                return mid;
            }
            else{
                j=mid-1;
            }
        }
        return ans;
    }
};