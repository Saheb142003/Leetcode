class Solution {
    int anothersol(string s){
        int bCount = 0;
    int ans = 0;

    for (char c : s) {
        if (c == 'b') {
            bCount++;
        } else { // c == 'a'
            ans = min(ans + 1, bCount);
        }
    }
    return ans;
    };
public:
    int minimumDeletions(string s) {

     /* int leftb=0,righta=0;
     int n=s.length();
     int a=0,b=0;
     vector<pair<int,int>>nums(n);
     for(int i=0;i<n;i++){
        if(s[i]=='a') a++;
        else b++;
     }   
    for(int i=0;i<n;i++){
        nums[i].first=leftb;
        if(s[i]=='b') leftb++;
    }   
    for(int i=n-1;i>=0;i--){
        nums[i].second=righta;
        if(s[i]=='a') righta++;
    }   
    int ans=INT_MAX;
    for(int i=0;i<n;i++){
     ans=min(ans,(nums[i].first+nums[i].second));
    }
    return ans;
     */
    return anothersol(s);
    }
};