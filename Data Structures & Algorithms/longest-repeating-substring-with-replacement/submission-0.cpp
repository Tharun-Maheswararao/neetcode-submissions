class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> hashmp;

        int l = 0, freq = 0, res = 0;

        for(int r = 0; r < s.length(); r++) {
            hashmp[s[r]]++;
            freq = max(freq, hashmp[s[r]]);

            while((r - l + 1) - freq > k) {
                hashmp[s[l]]--;
                l++;
            }

            res = max((r - l + 1), res);
        }

        return res;
    }
};
