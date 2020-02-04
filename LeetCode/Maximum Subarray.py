class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        maximum = nums[0]
        current_max = nums[0]
        for i in range(1, len(nums)):
            maximum = max(nums[i], maximum+nums[i])
            current_max = max(current_max, maximum)
        return current_max
