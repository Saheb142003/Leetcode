class Solution {
public:
    int numberOfSpecialChars(string word) {
        int freqa[26]={0};
        int freqA[26]={0};
        int count=0;
        for(int i=0;i<word.length();i++){
            if(word[i]<='z' && word[i]>='a'){
                freqa[word[i]-'a']++;
            }
            else{
                freqA[word[i]-'A']++;
            }
        }
        for(int i=0;i<26;i++){
            if(freqa[i]>0 and freqA[i]>0 )count++;
        }
        return count;
    }
};