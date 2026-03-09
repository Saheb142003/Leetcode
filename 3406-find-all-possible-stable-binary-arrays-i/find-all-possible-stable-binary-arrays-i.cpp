class Solution {
public:
int M=1e9+7;
int t[201][201][2];
    int solve(int oneleft,int zeroleft,bool last,int limit){
        if(oneleft==0 and zeroleft==0){
            return 1;
        }
        if(t[oneleft][zeroleft][last]!=-1){
            return t[oneleft][zeroleft][last];
        }
        int res=0;
        if(last==true){
            for(int i=1;i<=min(zeroleft,limit);i++){
                res=(res+solve(oneleft,zeroleft-i,false,limit))%M;
            }
        }
        else{
            for(int i=1;i<=min(oneleft,limit);i++){
                res=(res+solve(oneleft-i,zeroleft,true,limit))%M;
            }
        }
        return t[oneleft][zeroleft][last]=res;
    }
    int numberOfStableArrays(int zero, int one, int limit) {
        memset(t,-1,sizeof(t));
        int sone=solve(one,zero,false,limit);
        int szero=solve(one,zero,true,limit);
        
        return (sone+szero)%M;

    }
};