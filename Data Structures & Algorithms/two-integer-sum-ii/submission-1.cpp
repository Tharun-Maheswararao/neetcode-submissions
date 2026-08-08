class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;
        vector<int> result;

        while(left < right) {
            int compute = numbers[left] + numbers[right];
            if(compute == target) {
                result.insert(result.end(), {left+=1, right+=1});
                return result;
            } else if(compute < target) {
                left++;
            } else {
                right--;
            }
        }
    }
};
