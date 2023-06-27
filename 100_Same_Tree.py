class Solution:
    def isSameTree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
        def iss(p,q):
            if p==None and q==None: return True
            if p==None or q==None: return False
            return p.val==q.val and iss(p.left,q.left) and iss(p.right,q.right)
        return iss(p,q)
