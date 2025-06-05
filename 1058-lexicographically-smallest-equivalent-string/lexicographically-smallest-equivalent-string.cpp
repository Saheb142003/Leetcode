class Solution {
public:
    int find(vector<int>& abc, int v){
        if(abc[v]==-1){
            return v;
        }
            return abc[v]=find(abc,abc[v]);
    };
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        vector<int>abc(26,-1);
        for(int i=0;i<s1.size();++i){
            if(s1[i]==s2[i]) continue;
            int px=find(abc,s1[i]-'a');
            int py=find(abc,s2[i]-'a');
            if(px==py) continue;
            if(px>py) abc[px]=py;
            else abc[py]=px;
        }
        string res;
        for(int i=0;i<baseStr.size();++i){
            int parent=find(abc,baseStr[i]-'a');
            res.push_back(char(parent+97));
        }
        return res;
    }
};