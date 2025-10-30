class Solution {
public:
    string getPermutation(int n, int k) {
        string nums="";
        for(int i=0;i<n;i++){
            nums.push_back('0'+i+1);
        }
        string temp=nums;
        int x=0;
        while(x+1<k){
        int s=-1;
            nums=temp;
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
            temp=nums;
        x++;
    }
    return temp;

    }
};