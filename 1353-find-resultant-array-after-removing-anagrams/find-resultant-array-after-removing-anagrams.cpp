class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string>ans;
        ans.push_back(words[0]);
        int i=0,j=1;
        while(j<words.size()){
            string x=ans[i];
            sort(x.begin(),x.end());
            string y=words[j];
            sort(words[j].begin(),words[j].end());
            if(x!=words[j]){
                ans.push_back(y);
                i++;
            }
            j++;
        }
        return ans;
    }
};