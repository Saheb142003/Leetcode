class Solution {
public:
    string decodeString(string s) {
      stack<string>st;
      stack<int>ns;
      st.push("");
      int nums=-1;
      for(int i=0;i<s.size();i++){
        if(isdigit(s[i]) && nums==-1){
            nums=i;
        }
        else if(s[i]=='['){
            ns.push(stoi(s.substr(nums,i-nums)));
            nums=-1;
            st.push("");
        }
        else if(s[i]==']'){
            string decst;
            for(int j=0;j<ns.top();j++){
                decst+=st.top();
            }
            st.pop();
            ns.pop();
            st.top()+=decst;
        }else if(nums==-1){
            st.top()+=s[i];
        }

      }
        return st.top();
    }
};