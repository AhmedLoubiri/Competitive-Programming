class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int rows = nums.size();
        int cols = nums[0].size();
        int score = 0, currentMaxI = 0, currentMaxJ = 0;
        for (int i = 0; i < cols; i++) {
            int MAX = 0;
            for (int i = 0; i < rows; i++) {
                int max = 0;
                for (int j = 0; j < cols; j++) {
                    if (nums[i][j] > max) {
                        max = nums[i][j];
                        currentMaxI = i;
                        currentMaxJ = j;
                    }
                }
                if (max > MAX) MAX = max;
                nums[currentMaxI][currentMaxJ] = 0;
            }
            score += MAX;
        }
        return score;
    }
};