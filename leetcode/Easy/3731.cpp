class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> res;
        sort(nums.begin(), nums.end());
        for (int i = nums.front(); i <= nums.back(); i++) {
            if (find(nums.begin(), nums.end(), i) == nums.end()) {
                res.push_back(i);
            }
        }
        
        return res;
    }
};