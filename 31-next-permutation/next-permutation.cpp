class Solution {


public:
    void nextPermutation(vector<int>& nums) {
     int n=nums.size();
     int s=-1;
     for(int i=n-1;i>0;i--){
        if(nums[i-1]<nums[i]){
            s=i-1;
            break;
        }
     }
     if(s!=-1){

     int z=s;
        for(int i=n-1;i>=s+1;i--){
            if(nums[i]>nums[s]){
                z=i;
                break;
            }
        }
        swap(nums[s],nums[z]);
        } reverse(nums.begin()+1+s,nums.end());
     }
};