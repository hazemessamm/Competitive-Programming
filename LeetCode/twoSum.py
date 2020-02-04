class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        i = 0
        j = len(nums)-1
        new_nums = sorted(nums)
        result = []
        while i < j:
            if new_nums[i]+new_nums[j] == target:
                for k in range(len(nums)):
                    if nums[k] == new_nums[i] or nums[k] == new_nums[j]:
                        result.append(k)
                return result
            elif new_nums[i]+new_nums[j] > target:
                j -= 1
            elif new_nums[i]+new_nums[j] < target:
                i += 1
