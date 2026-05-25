class Solution {
public:
int t[10001];
    bool solve(int i,vector<int>&nums,int n){
        if(i==n-1) {
            return true;
        }
        if(t[i]!=-1) return t[i];
        for(int jump=1;jump<=nums[i];jump++){
            if(solve(jump+i,nums,n)==true) return t[i]=true;
            
        }
        return t[i]=false;
    }
    bool canJump(vector<int>& nums) {
        memset(t,-1,sizeof(t));
        int n=nums.size();
       return solve(0,nums,n);
       
    }
};