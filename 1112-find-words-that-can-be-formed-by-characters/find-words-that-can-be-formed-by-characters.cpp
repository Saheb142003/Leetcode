class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int>mp;
        for(auto i:chars){
            mp[i]++;
        }
        int sum=0;
        for(int i=0;i<words.size();i++){
            string x=words[i];
            unordered_map<char,int>check;
            for(auto c:x){
                check[c]++;
            }
            bool formed=true;
            for(auto j:check){
                if(mp[j.first]<j.second){
                    formed=false;
                    break;
                }
                
            }

            if(formed) sum+=x.size();
        }
        return sum;
    }
};