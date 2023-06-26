# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        def find_depth(node,l):
            if node is None:
                return l
            
            l += 1
            # find_depth(node.left,l)
            # find_depth(node.right,l)
            return max(find_depth(node.left,l),find_depth(node.right,l))
        return find_depth(root,0)


