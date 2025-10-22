class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int T=0,F=0;
        int maxi=0;
        int win=0;
        int i=0,j=0,n=answerKey.size();
        while(j<n){
            if(answerKey[j]=='T') T++;
            else F++;
            maxi=max(maxi,max(T,F));
            while(j-i+1- maxi>k){
                if(answerKey[i]=='T') T--;
                else F--;
                i++;
            }
            win=max(win,j-i+1);
            j++;
        }
        return win;
    }
};