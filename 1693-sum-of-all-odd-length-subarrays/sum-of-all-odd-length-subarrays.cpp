class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum = 0;
        int n = arr.size();

        for (int i = 0; i < n; i++) {
            int current_sum = 0; // Biến lưu tổng mảng con bắt đầu từ i

            for (int j = i; j < n; j++) {
                current_sum += arr[j]; // Mở rộng mảng con và cộng dồn phần tử mới

                // Độ dài mảng con từ i đến j là (j - i + 1)
                if ((j - i + 1) % 2 != 0) {
                    sum += current_sum; // Nếu độ dài lẻ, cộng tổng tạm vào sum chung
                }
            }
        }

        return sum;
    }
};