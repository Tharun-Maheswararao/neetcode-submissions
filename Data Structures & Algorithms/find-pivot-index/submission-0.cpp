class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> pref(n + 1, 0);

        for(int i = 0; i < n; i++) {
            pref[i + 1] = pref[i] + nums[i];
        }

        for(int i = 0; i < n; i++) {
            int leftSum = pref[i];
            int rightSum = pref[n] - pref[i+1];
            if(leftSum == rightSum) {
                return i;
            }
        }

        return -1;
    }
};