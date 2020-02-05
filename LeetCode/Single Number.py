import collections
class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        nums = collections.Counter(nums)
        for key, value in nums.items():
            if value == 1:
                return key
        
