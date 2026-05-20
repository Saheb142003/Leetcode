class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n=A.size();
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            int count=0;
            mp[A[i]]++;
            for(int j=0;j<=i;j++){
                if(mp.find(B[j])!=mp.end()){
                    count++;
                }
            }          
            ans.push_back(count);
        }
        return ans;
    }
};