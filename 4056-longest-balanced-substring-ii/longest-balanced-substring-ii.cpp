class Solution {
public:


    int case1(string s){
        int n=s.length();
        int ans=0;
        int count=0;
        char c=s[0];
        for(int i=0;i<n;i++){
            if(s[i]==c)count++;
            else{
                c=s[i];
                count=1;
            }
            ans=max(ans,count);
        }
        return ans;
    }
    int case2(string s,char x,char y){
        int n=s.length();
        unordered_map<int,int>mp;
        //mp.reserve(2*n + 5);
        //mp[0] = -1;
        int c1=0;
        int c2=0;
        int ans=0;

        for(int i=0;i<n;i++){
            if(s[i]!=x and s[i]!=y){
                mp.clear();
                mp[0] = i;
                c1=0,c2=0;
                continue;
            }
            if(s[i]==x)c1++;
            if(s[i]==y)c2++;

            if(c1==c2) ans=max(ans,c1+c2);
            int diff=c1-c2;
            if(mp.count(diff)){
                ans=max(ans,i-mp[diff]);
            }
            else{
                mp[diff]=i;
            }
        }
        return ans;
    }
    int case3(string s){
        int n=s.length();
        int ans=0;
        int a=0,b=0,c=0;
        unordered_map<string,int>mp;
        //mp.reserve(2*n + 5);
        //mp[{0,0}] = -1;
        for(int i=0;i<n;i++){
          if(s[i]=='a')a++;
          if(s[i]=='b')b++;
          if(s[i]=='c')c++;

          if(a==b and b==c){
            ans=max(ans,a+b+c);
          }

          int diffa=a-b;
          int diffb=b-c;

          string p=to_string(diffa)+"_"+to_string(diffb);
          if(mp.count(p)){
            ans=max(ans,i-mp[p]);
          }
          else{
            mp[p]=i;
          }

        }
        return ans;
    }

    int longestBalanced(string s) {
        int ans=0;
        ans=max(ans,case1(s));
        ans=max(ans,case2(s,'a','b'));
        ans=max(ans,case2(s,'b','c'));
        ans=max(ans,case2(s,'a','c'));
        ans=max(ans,case3(s));
        return ans;
    }
};