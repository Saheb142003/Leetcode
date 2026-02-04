class Solution {
public:
    typedef long long ll;

    long long maxSumTrionic(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        vector<ll>prefix(n,0),suffix(n,0);
        const ll inf=LONG_MIN;
        prefix[0]=inf;
        for(int i=1;i<n;i++){
            if(nums[i-1]<nums[i]) prefix[i]=max(0ll,prefix[i-1])+nums[i-1];
            else prefix[i]=inf;
        }   
        suffix[n-1]=inf;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]) suffix[i]=max(0ll,suffix[i+1])+nums[i+1];
            else suffix[i]=inf;
        }
        int i=0;
        ll ans=LONG_MIN;
        int l=0,r=1;
        while(l<n-2){
            ll sum=nums[l];
            while(r<n-1 && nums[r]<nums[r-1]) sum+=nums[r++];
            if(l<r-1 && prefix[l] != inf && suffix[r-1] != inf) ans=max(ans,prefix[l]+suffix[r-1]+sum);
            l=r;
            r=r+1;
        }
        return ans;
    }
    
};