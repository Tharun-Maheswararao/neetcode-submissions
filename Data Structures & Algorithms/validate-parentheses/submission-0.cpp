class Solution {
public:
    bool isValid(string s) {
        std::stack<char> st;
        std::unordered_map<char, char> parentheses = {
            {')', '('}, {'}', '{'}, {']', '['}
        };

        for(char ch : s) {
            if(parentheses.contains(ch)) {
                if(!st.empty() and st.top() == parentheses[ch]) {
                    st.pop();
                } else {
                    return false;
                }
            } else {
                st.push(ch);
            }
        }

        return st.empty();
    }
};
