class Solution {
public:
    int climbStairs(int n) {
        // just fibonacci sequence lol

        // recursive method (TAKES LONG TIME ON LARGE INPUTS LIKE 45)
        // if (n < 3) return n;

        // return climbStairs(n-1) + climbStairs(n-2);

        int X = 0;
        int Y = 1;

        if (n == 1) return Y;

        for (int i = 1; i <= n; i++) {
            int Z = X + Y;
            X = Y;
            Y = Z;
        }
        return Y;
    }
};