class Solution {
public:
    int poss(int i,vector<int>&nums,int csum){
        if(i==nums.size()){
            if(csum%3==0) return csum;
            return 0;
        }
        int pick=poss(i+1,nums,csum+nums[i]);
        int npick=poss(i+1,nums,csum);
        return max(pick,npick);
    }
    int ans(vector<int>&nums){
        vector<int>rem1;
        vector<int>rem2;
        int sum=0;
        for(auto i:nums){
            sum+=i;
            if(i%3==2){
                rem2.push_back(i);
            }
            else if(i%3==1){
                rem1.push_back(i);
            }
        }
        if(sum%3==0){
            return sum;
        }
        int res=0;
        sort(rem1.begin(),rem1.end());
        sort(rem2.begin(),rem2.end());
        int rem=sum%3;
        if(rem==1){
            int remove1= rem1.size()>=1?rem1[0]:INT_MAX;
            int remove2= rem2.size()>=2?(rem2[0]+rem2[1]):INT_MAX;

            return max(res,sum-min(remove1,remove2));

        }
        if(rem==2){
            int remove1= rem2.size()>=1?rem2[0]:INT_MAX;
            int remove2= rem1.size()>=2?(rem1[0]+rem1[1]):INT_MAX;

            return max(res,sum-min(remove1,remove2));

        }
        return res;

    }


    int maxSumDivThree(vector<int>& nums) {
        int n=nums.size();
        return ans(nums);

        //return poss(0,nums,0);        //not ggod approach , takes n^n tc
    }
};