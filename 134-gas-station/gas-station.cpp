class Solution {
public:
    int check(vector<int>& gas, vector<int>& cost,int x){
        int n=gas.size();
        int res=0;
        for(int i=0;i<n;i++){
            res+=gas[(i+x)%n];
            if(res<cost[(i+x)%n]){
                return -1;
            } 
          res-=cost[(i+x)%n];
        }
        return x;

    }
    int solve(vector<int>& gas, vector<int>& cost){
        int n=gas.size();
        for(int i=0;i<n;i++){
            if(check(gas,cost,i)!=-1){
                return i;
            }
        }
        return -1;
    }
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        // return solve(gas,cost);  // time limit error
        int index=0;
        int ans=0,curr=0;
        for(int i=0;i<gas.size();i++){
            int diff=gas[i]-cost[i];
            ans+=diff;
            curr+=diff;
            if(curr<0){
                curr=0;
                index=i+1;
            }
        }
        return ans>=0?index:-1;
    }
};