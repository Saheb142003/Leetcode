class Solution {
public:
   
    int countPrimes(int n) {
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            arr[i]=i;
        }

        for(int i=2;i<sqrt(n);i++){

            if(arr[i]!=0){
                for(int j=i*i;j<n;j+=i){
                    arr[j]=0;
                }
            }
        }
        int count=0;
        for(int i=2;i<n;i++){
            if(arr[i]!=0)count++;
        }
        return count;
    }
};