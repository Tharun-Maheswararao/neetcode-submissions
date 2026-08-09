class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxAr = 0;
        int l = 0;
        int r = heights.size() - 1;
        for(int i = 0; i < heights.size(); i++) {
            int currArea = min(heights[l], heights[r]) * (r - l);
            maxAr = max(maxAr, currArea);

            if(heights[l] > heights[r]) {
                r--;
            } else {
                l++;
            }
        }

        return maxAr;
    }
};
