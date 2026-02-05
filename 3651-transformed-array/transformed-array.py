class Solution:
    def constructTransformedArray(self, nums: List[int]) -> List[int]:
        s=len(nums)
        ans=[0]*s
        for i in range(s):
            if(nums[i]==0):
                ans[i]=0
            else:
                n=nums[i]%s
                x=(i+n)%s
                ans[i]=nums[x]
            
        return ans