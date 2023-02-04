class Solution {
public:
    bool isValid(string s) {
        stack<char> valid;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == ')' && !valid.empty() && valid.top() == '(') {
                valid.pop();
            } else if (s[i] == '}' && !valid.empty() && valid.top() == '{') {
                valid.pop();
            } else if (s[i] == ']' && !valid.empty() && valid.top() == '[') {
                valid.pop();
            } else {
                valid.push(s[i]);
            }
        }
        return valid.empty();
    }
};
