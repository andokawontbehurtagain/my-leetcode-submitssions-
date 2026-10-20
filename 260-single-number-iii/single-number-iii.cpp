#include <vector>

class Solution {
public:
    std::vector<int> singleNumber(std::vector<int>& nums) {
        // Step 1: XOR all numbers to get a ^ b
        long long xorSum = 0;
        for (int num : nums) {
            xorSum ^= num;
        }

        // Step 2: Get the rightmost set bit (diffBit)
        // Using long long prevents overflow if xorSum == INT_MIN
        long long diffBit = xorSum & (-xorSum);

        // Step 3: Separate numbers into two groups and XOR each group
        int a = 0, b = 0;
        for (int num : nums) {
            if (num & diffBit) {
                a ^= num;
            } else {
                b ^= num;
            }
        }

        return {a, b};
    }
};