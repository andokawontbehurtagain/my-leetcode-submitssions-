class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int n = nums.size();
        int even_count = 0;

        // Step 1: Đếm số lượng số chẵn trong mảng
        for (int x : nums) {
            if (x % 2 == 0) {
                even_count++;
            }
        }

        // Step 2: Điền số 0 vào các vị trí đầu, số 1 vào các vị trí còn lại
        for (int i = 0; i < n; i++) {
            if (i < even_count) {
                nums[i] = 0;
            } else {
                nums[i] = 1;
            }
        }

        return nums;
    }
};