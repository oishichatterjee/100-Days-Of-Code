class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int start = 0;
        int end = 0;
        int size = nums.size();
        int countZero = 0;
        int maxLength = 0;
        
        while (end < size) {
            if (nums[end] == 0) {
                countZero++;
            }
            
            while (start < size && countZero == 2) {
                if (nums[start] == 0) {
                    countZero--;
                }
                start++;
            }
            
            maxLength = max(end - start, maxLength);
            end++;
        }
        
        return maxLength;
    }
};
