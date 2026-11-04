class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        std::stack<int> st;

        for(string token : tokens) {
            if(token == "+") {
                int a = st.top();
                st.pop();

                int b = st.top();
                st.pop();

                st.push(b + a);
            } else if(token == "-") {
                int a = st.top();
                st.pop();

                int b = st.top();
                st.pop();

                st.push(b - a);
            } else if(token == "*") {
                int a = st.top();
                st.pop();

                int b = st.top();
                st.pop();

                st.push(b * a);
            } else if(token == "/") {
                int a = st.top();
                st.pop();

                int b = st.top();
                st.pop();

                st.push(b / a);
            } else {
                st.push(std::stoi(token));
            }
        }

        return st.top();
    }
};
