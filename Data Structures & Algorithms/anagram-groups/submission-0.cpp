class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string,vector<string>> groups;

        for(const string& s : strs) {
            string sorted_str = s;
            std::sort(sorted_str.begin(), sorted_str.end());
            groups[sorted_str].push_back(s);
        }

        vector<vector<string>> res;
        res.reserve(groups.size());

        for(const auto& pair : groups) {
            res.push_back(pair.second);
        }

        return res;
    }
};
