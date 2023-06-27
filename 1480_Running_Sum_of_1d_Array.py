class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        l=[]
        for i in range(1,len(nums)+1):
            sum=0
            for j in range(i):
                sum=nums[j]+sum
            l.append(sum)
        return l