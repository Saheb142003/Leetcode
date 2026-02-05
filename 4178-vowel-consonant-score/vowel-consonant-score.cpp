class Solution {
public:
    int vowelConsonantScore(string s) {
        int v=0;
        int c=0;
        int score=0;
        for(auto i:s){
            if((int)i>96 and (int )i<123){
                if(i=='a' or i=='e' or i=='i' or i=='o' or i=='u'){
                    v++;
                }
                else{
                    c++;
                }
            }
        }
        return c!=0?(v/c):0; 
    }
};