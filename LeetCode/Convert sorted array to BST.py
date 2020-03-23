# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def sortedArrayToBST(self, nums: List[int]) -> TreeNode:
        if nums == []:
            return
        middle = len(nums)//2
        tree_root = TreeNode(nums[middle])
        tree_root.left = self.sortedArrayToBST(nums[:middle])
        tree_root.right = self.sortedArrayToBST(nums[middle+1:])
        return tree_root
