class Solution {
public:
    int largestVariance(string str) {
        int countA = 0;
        int countB = 0;
        int maxVariance = 0;

        // Create a distinct set of character pairs
        unordered_set<char> distinctChars(str.begin(), str.end());

        // Run once for original string order, then again for reverse string order
        for (int runs = 0; runs < 2; runs++) {
            for (char letter1 : distinctChars) {
                for (char letter2 : distinctChars) {
                    if (letter1 == letter2) {
                        continue;
                    }
                    countA = countB = 0;
                    for (char letter : str) {
                        if (letter == letter1) {
                            countA++;
                        } else if (letter == letter2) {
                            countB++;
                        }
                        if (countA < countB) {
                            countA = countB = 0;
                        } else if (countA > 0 && countB > 0) {
                            maxVariance = max(maxVariance, countA - countB);
                        }
                    }
                }
            }

            // Reverse the string for the second time around
            reverse(str.begin(), str.end());
        }

        return maxVariance;
    }
};
