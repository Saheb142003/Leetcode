class Solution {
public:
    int numberOfSpecialChars(string word) {
        int freqa[26]={0};
        int freqA[26]={0};
        int count=0;
        for(int i=0;i<word.length();i++){
            if(isupper(word[i])){
                freqA[word[i]-'A']++;
            }
            else{
                freqa[word[i]-'a']++;
            }
        }
        for(int i=0;i<26;i++){
            if(freqa[i]>0 and freqA[i]>0 )count++;
        }
        return count;
    }
};