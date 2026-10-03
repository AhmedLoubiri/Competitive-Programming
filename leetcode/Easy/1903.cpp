class Solution {
public:
    string largestOddNumber(string num) {
        int index = num.size() - 1;
        while (index > -1) {
            if (num[index] % 2 != 0) return num;
            else {
                index--;
                num.pop_back();
            }
        }
        return num;
    }
};
