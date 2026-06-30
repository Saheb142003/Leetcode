class Solution {
public:
    int numberOfSubstrings(string s) {
        int ans=0;
        int i=0;int j=0;
        int n=s.size();
        //vector<int>arr(3,0);
        int arr[3]={0};
        while(j<n){
            arr[s[j]-'a']++;
            while(arr[0]>0 and arr[1]>0 and arr[2]>0){
                ans+=(n-j);   
                arr[s[i]-'a']--;
                i++;
            }
            j++;
        }
        return ans;
    }
};
// a a a a abc a a a a a 