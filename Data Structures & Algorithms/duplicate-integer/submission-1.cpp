class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::vector<int> unique;

        for(int i = 0; i < nums.size(); i++) {
            std::cout << i;
            auto it = std::find(unique.begin(), unique.end(), nums[i]);
            if(it == unique.end()) {
                unique.push_back(nums[i]);
            } else {
                return true;
            }
            
        }
        return false;
    }
};