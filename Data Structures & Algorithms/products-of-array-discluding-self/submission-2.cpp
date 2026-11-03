class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size(), 1);
        int rightProd = 1;
        vector<int> leftProdAr(nums.size(), 1);
        vector<int> rightProdAr(nums.size(), 1);

        for(int i = 0; i < nums.size(); i++) {
            if(i != 0) {
                leftProdAr[i] = nums[i - 1] * leftProdAr[i - 1];
            }
        }

        for(int i = nums.size() - 1; i >= 0; i--) {
            if(i != nums.size() - 1) {
                rightProdAr[i] = nums[i + 1] * rightProdAr[i + 1];
            }
        }

        for(int i = 0; i < nums.size(); i++) {
            res[i] = leftProdAr[i] * rightProdAr[i];
        }

        return res;

    }
};
