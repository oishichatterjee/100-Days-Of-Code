from typing import List

class Solution:
    def putMarbles(self, weights: List[int], k: int) -> int:
        if len(weights) == k or k == 1:
            return 0

        pairwise_sums = [weights[i] + weights[i+1] for i in range(len(weights)-1)]
        sorted_sums = sorted(pairwise_sums)

        return sum(sorted_sums[-(k-1):]) - sum(sorted_sums[:k-1])
