class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxi = 0, l = 0;
        unordered_set<char> charSet;

        for(int r = 0; r < s.size(); r++) {
            while(charSet.find(s[r]) != charSet.end()) {
                charSet.erase(s[l]);
                l++;
            }

            charSet.insert(s[r]);
            maxi = max(maxi, r - l + 1);
        }

        return maxi;
    }
};
