class Solution {
private:
    stack<int> open;
public:
    bool isValid(string s) {
        for (char val : s) {
            if (val == '(' || val == '[' || val == '{') {
                open.push(val);
            }
            else {
                if (open.empty()) {
                    return false;
                }
                if (open.top() == '(' && val == ')') {
                    open.pop();
                }
                else if (open.top() == '[' && val == ']') {
                    open.pop();
                }
                else if (open.top() == '{' && val == '}') {
                    open.pop();
                }
                else {
                    return false;
                }
            }
        }
        return open.empty();
    }
};
