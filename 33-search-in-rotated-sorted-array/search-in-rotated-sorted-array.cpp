class Solution {
    int searchbymymethod(vector<int>& nums, int target) {
        int n=nums.size();
        int i=0;
        int x=n-2;
        int pi=n-1;
        if (nums[0]==target) return 0;
        if (nums[n - 1]==target) return n-1;
        while(i<=x){
                if(nums[x]==target) return x;
                if(nums[i]==target) return i;
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
        if (pi == n - 1) {
            s = 0; e = n - 1;
        }
        else if (target >= nums[0] && target <= nums[pi]) {
            s = i+1; 
            e = pi-1;
        } else {
            s = pi + 1;
            e = x - 1;
        }
        while(s<=e){
           int  mid=s+(e-s)/2;
            if(nums[mid]== target) return mid;
            else if(nums[mid]<target) s=mid+1;
            else e=mid-1;
        }
        return -1;
    }
//  
    int youtubeMethod(vector<int>&nums,int target){
        int s=0,e=nums.size()-1;
        while(s<e){
            int mid=s+(e-s)/2;
            if(nums[mid]>nums[e]){
                s=mid+1;
            }
            else {
                e=mid;
            }
        }
        int p=s;
        s=0;
        e=nums.size()-1;
        if (target>=nums[p] && target<=nums[e]){
            s=p; 
        }
        else {
            e=p-1;
        }


        while(s<=e){
                int mid=s+(e-s)/2;
                if(nums[mid]==target){
                    return mid;
                }
                else if(nums[mid]<target){
                    s=mid+1;
                }
                else e=mid-1;
        }



        return -1;
    }

public:
    int search(vector<int>& nums, int target) {
        //return searchbymymethod(nums,target);
        return youtubeMethod(nums,target);
    }
};