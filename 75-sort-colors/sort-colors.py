class Solution:
    def sortColors(self, nums: List[int]) -> None:
        t=len(nums)
        z=0
        i=0
        while(i<t):
            if(nums[i]==0):
                (nums[i],nums[z])=(nums[z],nums[i])
                i+=1
                z+=1
            elif(nums[i]==1):
                i+=1
            else:
                (nums[i],nums[t-1])=(nums[t-1],nums[i])
                t-=1