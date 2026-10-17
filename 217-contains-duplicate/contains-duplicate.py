class Solution:
    def containsDuplicate(self, nums: list[int]) -> bool:
        feq={}
        for x in nums:
            feq[x]=feq.get(x,0)+1
        if(len(feq)==len(nums)):
            return False
        else:
            return True
        
        