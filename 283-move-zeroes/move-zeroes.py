class Solution:
    def moveZeroes(self, nums: list[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.

    
        """
        pos=0
        i=0
        while(i<len(nums)):
            if(nums[i]!=0):
                if i != pos:
                    nums[i],nums[pos]=nums[pos],nums[i]
                pos+=1
            i+=1
        

        