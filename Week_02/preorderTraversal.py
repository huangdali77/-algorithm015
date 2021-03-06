# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def preorderTraversal(self, root: TreeNode) -> List[int]:
        arr = []
        def digui(root):
            if root:
                arr.append(root.val)
                digui(root.left)
                digui(root.right)
        digui(root)
        return arr