class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int t=target;
        int i=0;int j=letters.size()-1;
        int n=j+1;
        // t
        // c e f g i l p q r s y z 
        char ans=letters[0];
        while(i<=j){
            int mid=(i+(j-i)/2);
                    if (letters[mid] == target) {
            int k = mid;
            while (k + 1 < n && letters[k + 1] == target) {
                k++;
            }
            if (k + 1 < n) return letters[k + 1];
            return letters[0]; // wrap
        }
            else if(letters[mid]>target){
                ans=letters[mid];
                j=mid-1;
            }
            else{
                i=mid+1;
            }


        }
        return ans;
    }
};