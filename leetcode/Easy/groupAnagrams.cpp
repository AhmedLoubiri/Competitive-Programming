// https://leetcode.com/problems/group-anagrams/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> map;
        for (string s : strs) {
            string a = s;
            sort(a.begin(), a.end());
            map[a].push_back(s);
        }
        for (const auto& pair : map) {
            // std::cout << pair.first << ": " << pair.second[0] << std::endl;
            res.push_back(pair.second);
        }

        return res;
    }
};