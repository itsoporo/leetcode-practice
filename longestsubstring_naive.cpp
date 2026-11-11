class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int longest = 0;
        std::unordered_map<int, int> visited; // frequency, index to s

        
        int current_longest = 0;
        for (int i = 0; i < s.size(); ++i) {
            char c = s[i];
            
            if (visited.contains(c)) { // repeat somewhere in the list
                int repeat_idx = visited[c]; // remove sections repetion and before (inclusive)
                //for (const auto& [k, v] : visited) {
                //    if (v <= repeat_idx) visited.erase(k);
                //} // can't delete elements inside of a range loop because memory is invalidated
                for (auto start = visited.begin(); start != visited.end();) {
                    if (start->second <= repeat_idx) start = visited.erase(start); // erase returns the next element (because the old one is now invalid)
                    else ++start;
                }
                current_longest = i - repeat_idx - 1; // now length is from current to last repeated
                // subtract 1 because we add the (repeated char) back right after
            }
            ++current_longest;
            longest = longest > current_longest ? longest : current_longest;

            visited[c] = i;
        }

        return longest;
    }
};
