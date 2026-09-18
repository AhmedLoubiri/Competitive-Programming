class Solution {
public:
    int smallestNumber(int n, int t) {
        int res = n;
        while (true) {
            int x = res;
            int p = 1;
            while (x > 0) {
                p *= x % 10;
                x /= 10;
            }
            if (p % t == 0) {
                return res;
            }
            res++;
        }
    }
};