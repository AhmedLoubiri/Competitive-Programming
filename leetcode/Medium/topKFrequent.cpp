class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        map<int, int> map;
        for (int e : nums) {
            int a = e;
            map [a]++;
        }
        vector<pair<int,int>> vec(map.begin(), map.end());
        sort(vec.begin(), vec.end(), [](const pair<int,int>& a, const pair<int,int>& b) {
            return a.second > b.second;
        });
        vector<int> res;
        for (int i = 0; i < k && i < vec.size(); ++i) {
            res.push_back(vec[i].first);
        }
        return res;
    }
};
