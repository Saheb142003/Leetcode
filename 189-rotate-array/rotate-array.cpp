class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    int n=nums.size();
    k%=n;
    if(n==0||n==1|| n==k) return;
    else{
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            ans[(i+k)%n]=nums[i];       
        }
        nums=ans;
    }
    }
};