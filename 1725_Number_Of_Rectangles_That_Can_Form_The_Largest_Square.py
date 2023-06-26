class Solution:
    def countGoodRectangles(self, rectangles: List[List[int]]) -> int:
        c = []
        count = 0
        for i in rectangles:
            c.append(min(i))
        ans = max(c)
        for j in range(len(c)):
            if c[j] == ans:
                count = count+1
        return count