class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        newArr = [];
        for i in range(len(nums)):
            if (nums[i] in newArr):
                return True
            else:
                newArr.append(nums[i])
        return False
        