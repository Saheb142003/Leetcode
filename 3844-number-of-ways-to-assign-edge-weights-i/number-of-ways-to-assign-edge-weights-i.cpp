class Solution {
public:
int M=1e9+7;
typedef long long ll;
ll pow(ll base,ll exp){
    if(exp==0){
        return 1;
    }
    ll half=pow(base,exp/2);
    ll res=(half*half)%M;
    if(exp&1) res=(res*base)%M;
    return res;
}
    int solve(unordered_map<int,vector<int>>&adj,int node,int parent){
        int d=0;
        for(auto i:adj[node]){
            if(i==parent)continue;
            d=max(d,solve(adj,i,node)+1);
        }
        return d;
    }
    int assignEdgeWeights(vector<vector<int>>& edges) {
        unordered_map<int,vector<int>>adj;
        for(auto &i:edges){
            int u=i[0];
            int v=i[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int d=solve(adj,1,-1);
        return pow(2,d-1);
    }
};
