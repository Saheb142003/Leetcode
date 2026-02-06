class Solution {
public:
    int maxArea(vector<int>& height) {
     int ans=0;int j=height.size()-1;
     int i=0;
     while(i<=j){
        ans=max(ans,min(height[j],height[i])*(j-i));
        if(height[i]>height[j]){
            j--;
        }
        else {
            i++;
        }
     }
     return ans;
    }
};