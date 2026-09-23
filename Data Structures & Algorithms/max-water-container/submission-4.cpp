class Solution {
public:
    int maxArea(vector<int>& heights) {
        
        int l = 0;
        int r = static_cast<int>(heights.size())-1;

        int result = 0;

        while (l < r) {

            int hl = heights[l];
            int hr = heights[r];
            
            result = max(result, (r-l) * min(hl, hr));

            if (hl < hr) {
                ++l;
            } else {
                --r;
            }

        }

        return result;

    }
};
