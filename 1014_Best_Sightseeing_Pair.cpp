#include <vector>
using namespace std;

class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& attractions) {
        int maxScore = 0, prevScore = attractions[0];
        for(int i = 1; i < attractions.size(); i++){
            maxScore = max(maxScore, prevScore - 1 + attractions[i]);
            prevScore = max(attractions[i], prevScore - 1);
        }
        return maxScore;
    }
};
