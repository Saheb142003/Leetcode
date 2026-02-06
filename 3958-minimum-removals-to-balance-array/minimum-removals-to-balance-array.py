class Solution:
    def minRemoval(self, nums: List[int], k: int) -> int:
        nums.sort()
        i=0
        j=0
        ans=0
        n=len(nums)
        while(j<n):
            if((nums[i]*k)>=nums[j]):
                ans=max(ans,j-i+1)
                j+=1
            else:
                i+=1
        return n-ans