// leetcode.com/problems/contains-duplicate/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = 0;
        bool res = false;
        while (i < nums.size() - 1) {
            if (nums[i] == nums[i+1]) {
                res = true;
            }
            i++;
        }
        return res;
    }
};