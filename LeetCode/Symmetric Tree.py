# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def mirror_tree(self, root_left, root_right):
        if root_left is None and root_right is None:
            return True
        if root_left is None or root_right is None:
            return False
        if root_left.val == root_right.val:
            return self.mirror_tree(root_left.left, root_right.right) and self.mirror_tree(root_left.right, root_right.left)
        else:
            return False
        
    def isSymmetric(self, root: TreeNode) -> bool:
        if root is None:
            return True
        else:
            return self.mirror_tree(root.left, root.right)
