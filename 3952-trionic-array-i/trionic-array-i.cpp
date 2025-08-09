class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        int p=0;
        int q=0;
        int inc=false, sec_inc=false, dec=false,end=false;
        while(i<n-1){
            if(nums[i] < nums[i+1] and q==0 and end==false){
                inc=true;
                p++;                
            }

            else if(nums[i]>nums[i+1] and i>=p and inc  and end==false){
                dec=true;
                q++;
            }
            else if(nums[i]<nums[i+1] and i>=p+q and inc and dec){
                sec_inc=true;
                end=true;
            }
            else{
                return false;

                break;
            }

        i++;

        }
        return inc && sec_inc && dec;
    }
};