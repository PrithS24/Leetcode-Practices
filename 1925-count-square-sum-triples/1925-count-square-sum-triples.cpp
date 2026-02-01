class Solution {
    int r;
public:
    int countTriples(int n) {
        while (n > 0) {
            for (int i = 1; i <= n; i++) {
                for (int j = i + 1; j <= n; j++) {
                    if (pow(i, 2) + pow(j, 2) == pow(n,2)) {
                        r += 2;  // Count the valid pair
                    }
                }
            }
            n--;  // Decrease n for the next iteration
        }
        return r;
    }
};
