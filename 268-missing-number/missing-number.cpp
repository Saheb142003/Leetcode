class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum=0;
        if(n%2==0) sum= (n / 2) * (n + 1);
        else sum= n * ((n + 1) / 2);
        for(int i : nums){
            sum-=i;
        }
        return sum;
    }
};