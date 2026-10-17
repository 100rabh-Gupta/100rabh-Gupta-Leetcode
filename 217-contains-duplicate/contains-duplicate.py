class Solution:
    def containsDuplicate(self, nums: list[int]) -> bool:
        feq={}
        for x in nums:
            feq[x]=feq.get(x,0)+1
        return(len(feq)<len(nums))
           
        
        