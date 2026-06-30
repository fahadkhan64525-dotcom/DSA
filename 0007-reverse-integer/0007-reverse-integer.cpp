class Solution {
public:
    int reverse(int x) {
        int re = 0;

        while (x != 0) {
            int digit = x % 10;

            // Overflow check
            if (re > INT_MAX / 10 || (re == INT_MAX / 10 && digit > 7))
                return 0;
            if (re < INT_MIN / 10 || (re == INT_MIN / 10 && digit < -8))
                return 0;

            re = re * 10 + digit;
            x /= 10;
        }

        return re;
    }
};