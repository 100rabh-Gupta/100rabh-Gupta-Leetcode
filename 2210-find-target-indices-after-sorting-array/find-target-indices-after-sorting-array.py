class Solution:
    def targetIndices(self, nums: list[int], target: int) -> list[int]:

        nums.sort()
        lists=[]
        for i in range(len(nums)):
            if (nums[i]==target):
                lists.append(i)
        return lists

        