class Solution {
public:
    bool isValid(string s) {
    stack<char> st;
    for (auto x : s) {
        if (x == '[') {
            st.push('[');
        }
        else if (x == '{') {
            st.push('{');
        }
        else if (x == '(') {
            st.push('(');
        }
        else if (x == ')') {
            if (st.empty() || st.top() != '(') return false;
            st.pop();
        }
        else if (x == '}') {
            if (st.empty() || st.top() != '{') return false;
            st.pop();
        }
        else if (x == ']') {
            if (st.empty() || st.top() != '[') return false;
            st.pop();
        }
    }
    if (st.empty()) return true;
    return false;
    }
};