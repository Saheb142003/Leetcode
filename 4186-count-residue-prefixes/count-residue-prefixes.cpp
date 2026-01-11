class Solution {
public:
    int residuePrefixes(string nums) {
     unordered_set<char>s;
     int count=0;
     for(int i=0;i<nums.size();i++){
        s.insert(nums[i]);
        if((i+1)%3== s.size()) count++;
     }   
    return count;
    }
};