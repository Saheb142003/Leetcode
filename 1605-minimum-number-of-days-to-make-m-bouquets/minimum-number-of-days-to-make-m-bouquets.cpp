class Solution {
public:
    bool checkbloom(vector<int>bloomDay,int mid,int k,int m){
            int count=0;
            int flowers=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=mid){
               flowers++;
               if(flowers==k){
                count++;
                flowers=0;
               }
            }
            else flowers=0;
           
            if(count==m){
                return true;
            }
        }
        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int ans=-1;
        int n=bloomDay.size();
        if(1LL * m * k > n) return -1;
        int l=0;
        int r=*max_element(bloomDay.begin(),bloomDay.end());
        while(l<=r){
            int mid=l+(r-l)/2;
            if(checkbloom(bloomDay,mid,k,m)){
                ans=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};