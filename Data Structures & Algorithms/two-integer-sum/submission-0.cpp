class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        unordered_map<int, int> res;

        for(int i = 0; i < size; i++) {
            int sec_part = target - nums[i];
            if(res.count(sec_part)) {
                return {res[sec_part], i};
            }
            res[nums[i]] = i;
        }

        return {};
    }
};
