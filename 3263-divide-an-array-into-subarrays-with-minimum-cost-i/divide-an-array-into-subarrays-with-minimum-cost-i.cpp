class Solution {
public:
    int minimumCost(vector<int>& nums) {
    // 10,45,21,3,5,21,65,9,9,45,65,21,465,871,2
     int ans=nums[0];
     priority_queue<int>pq;
     for(int i=1;i<nums.size();i++){
        pq.push(nums[i]);
        if(pq.size()>2){
           pq.pop();
        }
     }  
     while(!pq.empty()){
        ans+=pq.top();
        pq.pop();
     } 
     return ans;
    }
};