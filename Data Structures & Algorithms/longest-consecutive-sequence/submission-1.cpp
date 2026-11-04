class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        // std::sort(nums.begin(), nums.end());
        // auto it = std::unique(nums.begin(), nums.end());
        // nums.erase(it, nums.end());

        // int sequenceCt = 1;
        // int largest = 1;

        // for(int i = 0; i < (int)nums.size() - 1; i++) {
        //     if(nums[i + 1] != nums[i] + 1) {
        //         sequenceCt = 1;
        //     } else {
        //         sequenceCt++;
        //         largest = max(largest, sequenceCt);
        //     }
        // }

        // return largest;

        std::unordered_set<int> numSet(nums.begin(), nums.end());
        int largest = 0;

        for(int num : numSet) {
            if(!numSet.contains(num - 1)) {
                int curr = num;
                int streak = 1;

                while(numSet.contains(curr + 1)) {
                    curr++;
                    streak++;
                }

                largest = max(largest, streak);
            }
        }

        return largest;
    }
};
