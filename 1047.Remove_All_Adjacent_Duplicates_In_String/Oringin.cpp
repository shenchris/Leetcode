class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> result_reverse;
        for (int i = 0; i < s.size(); ++i) {
            if (result_reverse.empty() or s[i] != result_reverse.top()) {
                result_reverse.push(s[i]);
            } else result_reverse.pop();
        }

        string result = "";
        while (!result_reverse.empty()) {
            result = result_reverse.top()+result;
            result_reverse.pop();
        }

        return result;
    }
};
