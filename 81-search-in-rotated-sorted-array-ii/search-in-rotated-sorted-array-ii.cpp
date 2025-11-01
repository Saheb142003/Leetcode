class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        int s=0, e=n-1;
        // [7,8,9,1,2,3,4,5,6]
        while(s<e){
            while(s<e and nums[s]==nums[s+1]) s++;
            while(s<e and nums[e]==nums[e-1]) e--;
            int mid=s+(e-s)/2;
            if(nums[mid]>nums[e]){
                s=mid+1;
            }
            else{
                e=mid;
            }
        }
        int p=e;
        s=0;
        e=n-1;
        if(nums[p]<=target and  nums[e]>=target){
            s=p;
        }
        else{
            e=p-1;
        }

        while(s<=e){
           int  mid=s+(e-s)/2;
            if(nums[mid]== target) return true;
            else if(nums[mid]<target) s=mid+1;
            else e=mid-1;
        }

    return false;
    }
};