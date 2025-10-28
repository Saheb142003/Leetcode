class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x=0;
        int j=nums.size()-1;
        int i=0;
        while(i<j){
            x^=nums[i];
            x^=nums[j];
            j--;
            i++;
        }   
        if(i==j)x^=nums[i];  
        return x;
    }
};