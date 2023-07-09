#include <vector>
#include <algorithm>

class Solution {
public:
    int maxArea(vector<int>& heights) {
        int leftPtr = 0;
        int rightPtr = heights.size() - 1;
        int maxArea = 0;

        while (leftPtr < rightPtr) {
            int currentArea = std::min(heights[leftPtr], heights[rightPtr]) * (rightPtr - leftPtr);
            maxArea = std::max(maxArea, currentArea);

            if (heights[leftPtr] < heights[rightPtr]) {
                leftPtr++;
            } else {
                rightPtr--;
            }
        }

        return maxArea;
    }
};
