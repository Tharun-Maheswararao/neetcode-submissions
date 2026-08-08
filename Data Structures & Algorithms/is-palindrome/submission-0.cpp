class Solution {
public:
    bool isPalindrome(string s) {
        
        s.erase(remove_if(s.begin(), s.end(), [](char c){ return!isalnum(c); }), s.end());

        int leftPtr = 0;
        int rightPtr = s.length() - 1;

        while(leftPtr < rightPtr) {
            if(tolower(s[leftPtr]) == tolower(s[rightPtr])) {
                leftPtr++;
                rightPtr--;
            } else {
                return false;
            }
        }
        return true;

    }
};
