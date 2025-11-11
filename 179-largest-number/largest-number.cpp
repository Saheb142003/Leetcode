class Solution {
    string my_approach(vector<int>&nums){
        int maxi=*max_element(nums.begin(),nums.end());
        int n=nums.size();
        int l=0;
        while(maxi>0){
            maxi/=10;
            l++;
        }
        
        vector<pair<int, int>>ans(n);

        for(int i=0;i<n;i++){
            ans[i].second=nums[i];
            string e=to_string(nums[i]);
            while((int)e.size()<l){
                e.push_back('0');
            }
            ans[i].first=stoi(e);
            
        }
        sort(ans.begin(), ans.end(), [](pair<int, int> &a, pair<int, int> &b) {
                return a.first > b.first;
        });

        string res="";
        for(int i=0;i<n;i++){
            res+=to_string(ans[i].second);
        }
        return res;
    }

public:
    string largestNumber(vector<int>& nums) {
        string ans="";
        vector<string>s;
        for (int n : nums) s.push_back(to_string(n));
        sort(s.begin(),s.end(),[](string &a, string &b) {
        return a+b>b+a;
        });
        for(auto i:s){
            ans+=(i);
        }
        if(ans[0]=='0')return "0";
        return ans;
    }
};