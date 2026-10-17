class Solution:
    def containsDuplicate(self, nums: list[int]) -> bool:
        s=set()
        for x in nums:
            s.add(x)
        return(len(s)<len(nums))
           
        
        