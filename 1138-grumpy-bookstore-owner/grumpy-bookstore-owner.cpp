class Solution {
public:
    int maxSatisfied(vector<int>& arr, vector<int>& grumpy, int k) {
        int n=arr.size();
        int prevLoss=0;
        for(int i=0;i<k;i++){
            if(grumpy[i]==1) prevLoss+=arr[i];
        }
        int maxLoss=prevLoss;
        int index=0;
        int i=1,j=k;
        while(j<n){
            int cLoss=prevLoss;
            if(grumpy[j]==1) cLoss+=arr[j];
            if(grumpy[i-1]==1) cLoss-=arr[i-1];
            if(maxLoss<cLoss) maxLoss=cLoss,index=i;
            prevLoss=cLoss;
            i++,j++;
        }


        for(int i=index;i<index+k;i++){
            grumpy[i]=0;
        }
        int sum=0;
        for(int i=0;i<n;i++){
            if(grumpy[i]==0) sum+=arr[i];
        }
        return sum;
    }
};