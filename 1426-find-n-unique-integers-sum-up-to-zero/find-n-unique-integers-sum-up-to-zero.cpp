class Solution {
public:
    vector<int> sumZero(int n) {
        int i=0,j=n-1;
        vector<int>ans(n);
        while(i<=j){
            ans[j]=n/2-i;
            ans[i]=i-n/2;
            i++,j--;
        }
        return ans;
    }
};