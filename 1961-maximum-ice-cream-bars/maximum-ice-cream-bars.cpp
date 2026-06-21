class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int ans=0;
        for(auto i:costs){
            coins-=i;
            if(coins>=0){
                ans++;
            }
            else{
                break;
            }
        }
        return ans;
    }
};