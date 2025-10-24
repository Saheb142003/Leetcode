class Solution {
public:
int m=INT_MAX;
vector<int>result;
    void solve(vector<int>&factors,int i,int k,long long prod,int n,vector<int>&ans){
        if(i>=factors.size() or ans.size()>k){
            return ;
        }
        if (prod > n) return;
        
        if (ans.size() == k && prod == n) {
            int dif = *max_element(ans.begin(), ans.end()) - *min_element(ans.begin(), ans.end());
            if (dif < m) {
                m = dif;
                result = ans;
            }
            return;
        }

        ans.push_back(factors[i]);
        solve(factors,i,k,prod*factors[i],n,ans);
        ans.pop_back();
        solve(factors,i+1,k,prod,n,ans);

    }
    vector<int> minDifference(int n, int k) {
        vector<int>factors; //[1,2,4,5,10,20,25,50]
        for(int i=1;i<n;i++){
            if(n%i==0) factors.push_back(i);
          
        }
        vector<int >ans;
        result.clear(); m = INT_MAX;
        solve(factors,0,k,1LL,n,ans);
       return result;
    }
};