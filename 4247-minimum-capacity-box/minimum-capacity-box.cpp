class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
     int n=capacity.size();
     int ans=INT_MAX;
     int com=INT_MAX;
     for(int i=0;i<n;i++){
        if(capacity[i]>=itemSize and capacity[i]<com ){
            ans=i;
            com=capacity[i];
        }
     }
     return ans==INT_MAX?-1:ans;
    }
};