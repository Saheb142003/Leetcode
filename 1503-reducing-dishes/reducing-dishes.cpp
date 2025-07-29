class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        int n=satisfaction.size();
        sort(satisfaction.begin(),satisfaction.end());
        vector<int>ans(n);
        ans[n-1]=satisfaction[n-1];
        for(int i=n-2;i>=0;i--){
            ans[i]+=satisfaction[i]+ans[i+1];
        }
        int idx=-1;
        for(int i=0;i<n;i++){
            if(ans[i]>0){
                idx=i;
                break;
            }
        }
        if(idx==-1) return 0;
        int sum=0;
        int x=1;
        for(int i=idx;i<n;i++){
            sum+=(satisfaction[i]*x);
            x++;
        }
        return sum;
    }
};