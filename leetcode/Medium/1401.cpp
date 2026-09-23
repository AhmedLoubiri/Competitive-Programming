class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int x = abs(xCenter - x1);
        int y = abs(xCenter - x2);
        int w = abs(yCenter - y1);
        int z = abs(yCenter - y2);
        if (xCenter >= x1 && xCenter <= x2 && yCenter >= y1 && yCenter <= y2) {
            return true;
        }
        if (x*x + w*w <= radius*radius || x*x + z*z <= radius*radius || y*y + w*w <= radius*radius || y*y + z*z <= radius*radius) {
            return true;
        }
        if (xCenter >= x1 && xCenter <= x2 && (w <= radius || z <= radius)) {
            return true;
        }
        if (yCenter >= y1 && yCenter <= y2 && (x <= radius || y <= radius)) {
            return true;
        }
        return false;
    }
};