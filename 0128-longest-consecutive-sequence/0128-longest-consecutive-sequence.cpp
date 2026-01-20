class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        set<int> s(nums.begin(), nums.end());
        int prevElement = *s.begin();
        int count = 1;
        int maxCount = 1;

        for (auto it = next(s.begin()); it != s.end(); ++it) {
            if (*it == prevElement + 1) {
                count++;
            } else {
                maxCount = max(maxCount, count);
                count = 1;
            }
            prevElement = *it;
        }

        maxCount = max(maxCount, count);
        return maxCount;
    }
};
