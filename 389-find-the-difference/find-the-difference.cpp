class Solution {
public:
    char findTheDifference(string s, string t) {
       int sum=0;
       for(auto i:t){
        sum+=(i-'a');
       }
       for(auto i:s){
        sum-=(i-'a');
       }
       
       return (sum+'a');
    }
};