class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> freq;
        std::vector<std::vector<int>> stac(nums.size() + 1);

        for(const auto& n : nums) {
            freq[n]++;
        }

        for(const auto& pair : freq){
            stac[pair.second].push_back(pair.first);
        }

        std::vector<int> res;
        res.reserve(k);

        for(int i = stac.size() - 1; i > 0; i--){
            for (const int num : stac[i]) {
                res.push_back(num);
                if(res.size() == k){
                    return res;
                }
            }
        }

        
        return res;
    }
};
