class Solution {
public:
    bool isSubsequence(string s, string t) {
        int x = s.size(), j = 0;
        int y = t.size(), f = 0;
        if (x == 0) {
            return true;
        }
        for (int i = 0; i < y && j < x; i++) {

            if (s[j] == t[i]) {
                f++;
                j++;
            }
            if (f == x)
                return true;
        }
        return false;
    }
};