class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int n=s.size();
        stack<int>st;
        unordered_set<int>rm;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                st.push(i);
            }
            else if(s[i]==')'){
                if(st.empty()){
                    rm.insert(i);
                }
                else{
                    st.pop();
                }
            }
        }
        while(!st.empty()){
            rm.insert(st.top());
            st.pop();
        }
        string result="";
        for(int i=0;i<n;i++){
            if(rm.find(i)==rm.end()){
                result.push_back(s[i]);
            }
        }
        return result;
    }
};