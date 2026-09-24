class Solution {
public:
    int trap(vector<int>& height) {
        
        int maxL = 0;
        int maxR = 0;
        int l = 0;
        int r = static_cast<int>(height.size())-1;

        int total = 0;

        while (l <= r) {

            maxL = max(maxL, height[l]);
            maxR = max(maxR, height[r]);

            if (maxL < maxR) {

                total += maxL - height[l];
                ++l;

            } else {

                total += maxR - height[r];
                --r;

            }

        }

        return total;

    }
};
