class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";
        for(const auto& s : strs) {
            res += std::to_string(s.size()) + "#" + s;
        }

        std::cout << res;
        return res;

    }

    vector<string> decode(string s) {
        std::vector<string> res;
        int i = 0;

        while (i < s.length()) {
            int j = i;
            while (s[j] != '#') {
                j++;
            }
            int length = std::stoi(s.substr(i, j));
            res.push_back(s.substr(j + 1, length));
            i = j + 1 + length;
        }

        return res;
    }
};
