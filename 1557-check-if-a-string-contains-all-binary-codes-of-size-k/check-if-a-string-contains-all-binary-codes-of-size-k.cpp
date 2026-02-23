class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n=s.length();
        unordered_set<string>list;
        for(int i=k;i<=n;i++){
            string sub=s.substr(i-k,k);
            list.insert(sub);            
        }
        return list.size()>=pow(2,k);
    }
};