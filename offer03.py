class Solution:
    def findRepeatNumber(self, nums: List[int]) -> int:
        i: int = 0
        while(i<len(nums)):
            if nums[i] == i:
                i+=1
                continue
            if nums[i]==nums[nums[i]]:
                return nums[i]
            else:
                nums[nums[i]],nums[i] = nums[i],nums[nums[i]]
                
        return -1
