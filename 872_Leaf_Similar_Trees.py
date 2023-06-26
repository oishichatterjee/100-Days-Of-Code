# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def leafSimilar(self, root1: Optional[TreeNode], root2: Optional[TreeNode]) -> bool:
        def findLeaf(node, leafStr):
            if node is None:
                return leafStr
            if node.left is None and node.right is None:
                leafStr += str(node.val) + ' '
                return leafStr
            return findLeaf(node.left, leafStr) + findLeaf(node.right, leafStr)
        return findLeaf(root1, "") == findLeaf(root2, "")