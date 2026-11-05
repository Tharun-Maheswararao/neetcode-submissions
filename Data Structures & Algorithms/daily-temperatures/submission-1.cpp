class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result(temperatures.size(), 0);

        // for(int i = 0; i < temperatures.size(); i++) {
        //     int days = 0;
        //     for(int j = i + 1; j < temperatures.size(); j++) {
        //         if(temperatures[j] > temperatures[i]) {
        //             days = j - i;
        //             break;
        //         } 
                
        //     }
        //     result.push_back(days);
        // }

        std::stack<std::pair<int, int>> st;

        for(int i = 0; i < temperatures.size(); i++) {
            int curr = temperatures[i];

            while(!st.empty() and curr > st.top().first) {
                auto pr = st.top();
                st.pop();
                result[pr.second] = i - pr.second;
            }
            st.push({curr, i});
        }

        return result;
    }
};
