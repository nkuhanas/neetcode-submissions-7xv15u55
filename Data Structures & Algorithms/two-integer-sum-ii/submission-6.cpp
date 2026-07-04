class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int l = 0;
        int r = numbers.size()-1;

        while (l < r) {

            int current = numbers[l] + numbers[r];

            // hm, if we're ever over then either left needs to move right or right needs to move left
            // if we're ever under, left usually just needs to move right
            // therefore we should begin acting under the assumption left is the beginning cursor

            if (current == target) {
                return vector<int> { l+1, r+1 };
            }

            if (current < target) {
                ++l;
            } else {
                --r;
            }

        }

        return vector <int> {0, 1};

    }
};
