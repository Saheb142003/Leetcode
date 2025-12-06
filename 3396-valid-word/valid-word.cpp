class Solution {
public:
    bool isValid(string word) {
        if(word.size()<3) return false;
        bool con=false;
        bool vow=false;
        bool ans=false;
        for(int i=0;i<word.size();i++){
            if(isdigit(word[i])){
                ans=true;
            }
            else if(word[i]>='A' and word[i]<='Z'){
                if(word[i]=='A'|| word[i]=='E'|| word[i]=='I'|| 
                word[i]=='O'|| word[i]=='U'){
                    vow=true;
                }
                else{
                    con=true;
                } 
                ans=true;
            }
            else if(word[i]>='a' and word[i]<='z'){
                if(word[i]=='a'||   word[i]=='e'||    word[i]=='i'|| 
                    word[i]=='o'||  word[i]=='u'){
                    vow=true;
                }
               else  {con=true;}
                 ans=true;
            }
            else return false;
        }
        return con and vow;
    }
};