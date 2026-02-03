class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int i=0,n=nums.size()-1;
        bool a=false,b=false,c=false;
        while(i<n and nums[i]<nums[i+1]){
            i++;a=true;
        }
        while(i<n and nums[i]>nums[i+1]){
            i++;
            b=true;
        }
        while(i<n and nums[i]<nums[i+1] ){
            i++;
            c=true;
        }

        return i==n and a && b && c;
    }
};