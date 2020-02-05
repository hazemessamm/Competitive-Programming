class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        for i in range(len(nums2)-1,-1,-1):
            nums1[-i-1] = nums2[-i-1]
            
        nums1.sort()
            
        
