class Solution {
public:
    bool armstrongNumber(int n) {
        int original = n;

        // Step 1: count digits
        int digits = 0;
        int temp = n;
        while (temp > 0) {
            digits++;
            temp /= 10;
        }

        // Step 2: calculate sum of digit^digits
        int sum = 0;
        temp = n;
        while (temp > 0) {
            int digit = temp % 10;

            int power = 1;
            for (int i = 0; i < digits; i++) {
                power *= digit;
            }

            sum += power;
            temp /= 10;
        }

        return sum == original;
    }
};
