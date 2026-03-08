class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n=nums.size();
        int x=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){

            int s=stoi(nums[i], nullptr, 2);
            if(s==x){
                x++;
            }
            else{
                break;
            }
        }
        string ans=bitset<16>(x).to_string();
        
        return ans.substr(16-n);
    }
};