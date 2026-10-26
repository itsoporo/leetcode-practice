#include <vector>

using std::vector;

class Solution {
public:

    int sortPermutation(vector<int>& nums) {
        vector<int[2]> possible_swaps;
        // check if solution can be done in 1 swap (find if it follows the restriction)
        for (size_t i = 1; i < nums.size() - 1; ++i) {
            int mistakes = 1;
            if (nums.at(i) < nums.at(i + 1) { // if not ascending
                ++mistakes;

                if (mistakes > 1) { // unfixable with one swap
                    return 0;
                }

                for (size_t j = 0; j < nums.size(); j++) {
                    if (j == i) continue;

                    if (nums.at(j)) { // if swap will pass

                    }
                }
            }
        }

        // 1, 2, 3, 9, 4, 5 
        // 1, 2, 3, 5, 4, 6  

        for (int k = 0; k < nums.size(); ++K) {
            vector<int> intersection_idx;
            for (const auto& v: nums) {
                nums.push_back(v&k);
            }

            for (const auto& i: intersection_idx) {
                
            }
        }
    }
};
