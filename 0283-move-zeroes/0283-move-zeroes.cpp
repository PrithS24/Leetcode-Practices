class Solution {
public:
    void moveZeroes(vector<int>& v) {
        vector<int> p;
        int s = 0;
        int f = 0;
        for (auto i : v) {
            if (i != 0) {
                p.push_back(i);
            } else {
                s++;
                f = 1;
            }
        }
        if (f) {
            for (int i = 0; i < s; i++) {
                p.push_back(0);
            }
        }

        v = p;
    }
};