class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        int i=0;
        int x=n-2;
        int pi=n-1;
        if (nums[n - 1] == target or nums[i]==target) return true;
        while(i<=x){
                if(nums[x]==target) return true;
                if(nums[i]==target) return true;
            if(nums[x]>nums[x+1]){
                pi=x;
                break;
            }
            if(nums[i]>nums[i+1]) {
                pi=i;
                break;
            }
            i++;x--;
        }

        int s, e;
        if (target >= nums[0] && target <= nums[pi]) {
            s = 0; 
            e = pi;
        } else {
            s = pi + 1; 
            e = n - 1;
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