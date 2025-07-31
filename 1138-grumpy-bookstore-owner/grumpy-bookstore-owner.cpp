class Solution {
public:
    int maxSatisfied(vector<int>& arr, vector<int>& grumpy, int k) {
       int mLoss=INT_MIN;
       int n=arr.size();
       for(int i=0;i<k;i++){
        mLoss+=arr[i];
       }
       int i=1,j=k;
       int id=0;
       int prevLoss=mLoss;
       while(j<n){
            int cLoss=prevLoss;
        if(grumpy[j]==1) cLoss+=arr[j];
        if(grumpy[i-1]==1) cLoss-=arr[i-1];
        if(mLoss<cLoss) mLoss=cLoss,id=i;
        prevLoss=cLoss;
        i++,j++;
        }
        for(int i=id;i<id+k;i++){
            grumpy[i]=0;
        }
        int sum=0;
        for(int i=0;i<n;i++){
            if(grumpy[i]==0)sum+=arr[i];
        }
        return sum;
    }
};