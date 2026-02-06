class Solution:
    def maxArea(self, nums: List[int]) -> int:
         i=0
         n=len(nums)
         j=n-1
         ans=0
         while(i<=j):
            ans=max(ans,min(nums[i],nums[j])*(j-i))
            if(nums[i]<nums[j]):
                i+=1
            else: 
                j-=1
         return ans