class Solution {
public:
    int canBeTypedWords(string text, string word) {
       unordered_set<char> broken(word.begin(), word.end());
        int count=0;
        bool brokenWord = false;
        for(int i=0;i<=text.size();i++){
            if (i<text.size() && text[i]!=' ') {
              if (broken.find(text[i])!= broken.end()) {
                brokenWord = true;
            }
        } else {
            if (!brokenWord && (i>0 && text[i-1]!=' '))
                count++;
            brokenWord = false;
        }
    }
        return count;
    }
};