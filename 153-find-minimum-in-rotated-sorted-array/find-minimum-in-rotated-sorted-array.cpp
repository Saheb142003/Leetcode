class Solution {
public:
    int findMin(vector<int>& nums) {
        // [7,8,9,12,45,78,98,100,1,2,3,4,6,8]
        int s=0;
        int e=nums.size()-1;
        while(s<e){
            int mid=s+(e-s)/2;
            if(nums[mid]>nums[e]){
                s=mid+1;
            }
            else{
                e=mid;
            }
        }
        return nums[e];
    }
};