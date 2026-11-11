class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int longest = 0;
        // std::unordered_set<char> visited; // frequency, index to s
        int visited[128];
        std::fill(visited, visited + 128, -1);

        int start_idx = 0;
        int end_idx = 0; 
        for (int i = 0; i < (int)s.size(); ++i) {
            unsigned char c = s[i];
            
            if (visited[c] >= start_idx) { // repeat somewhere in the list, if  the repeat will make the start higher 
                start_idx = visited[c] + 1; // move to one after the repeat
            }
            longest = std::max(longest, i - start_idx + 1); // + 1 because 0, 0 is 1 char

            visited[c] = i;
        }

        return longest;
    }
};
