class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        string longestPrefix = "";
        int index = 0;

        for (int j = 0; j < strs[0].size(); j++) {
            char currentChar = strs[0][index];
            bool equal = true;

            for (int i = 1; i < strs.size(); i++) {
                if (index >= strs[i].length() ||
                    strs[i][index] != currentChar) {
                    equal = false;
                    break;
                }
            }

            if (!equal) {
                break;
            }

            longestPrefix += currentChar;
            index++;
        }

        return longestPrefix;
    }
};