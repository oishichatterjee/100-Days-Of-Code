#include <vector>
#include <string>

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string concatenated1;
        string concatenated2;
        concatenated1 = "";
        concatenated2 = "";
        
        // Concatenate strings in word1
        for (int i = 0; i < word1.size(); i++) {
            concatenated1 += word1[i];
        }
        
        // Concatenate strings in word2
        for (int j = 0; j < word2.size(); j++) {
            concatenated2 += word2[j];
        }
        
        // Check if the concatenated strings are equal
        return (concatenated1 == concatenated2) ? true : false;
    }
};
