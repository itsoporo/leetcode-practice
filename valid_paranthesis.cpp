class Solution {
public:
    bool isValid(string s) {
        stack<char> brackets;

        for (auto const &c: s) {
            if (c == '(' || c == '[' || c == '{') {
                brackets.push(c);
            } else {
                if (brackets.empty()) {
                    return false;
                } else {
                    char on_stack = brackets.top();
                    brackets.pop();
                    if (!(on_stack == '(' && c == ')'
                    || on_stack == '[' && c == ']'
                    || on_stack == '{' && c == '}')) {
                        return false;
                    }
                }
            }
        }

        return brackets.empty();
    }
};
