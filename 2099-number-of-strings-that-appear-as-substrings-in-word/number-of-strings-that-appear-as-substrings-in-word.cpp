class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        set<string>s;

        for(int i=0;i<word.size();i++){
            string temp="";
            for(int j=i;j<word.size();j++){
                temp+=word[j];
                s.insert(temp);
            }
        }
        int ans=0;
        for(int i=0;i<patterns.size();i++){
            if(s.find(patterns[i])!=s.end()){
                ans++;
            }
        }
        return ans;
    }
};