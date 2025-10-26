class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int m=1;
        for(int i=1;i<=nums.size();i++){
            m*=i;
        }
        vector<vector<int>> ans(m);
        sort(nums.begin(),nums.end());
        ans[0]=nums;
        int x=0;
        while(x+1<m){
            nums=ans[x];
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
            } reverse(nums.begin()+s+1,nums.end());

        ans[x+1]=nums;
        //nums=ans[x];
        x++;
        }
        return ans;
    }
};