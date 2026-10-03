class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum = 0;
        int n = arr.size();

        for (int i = 0; i < n; i++) {
            // Tính số mảng con chứa arr[i]
            int total_subarrays = (i + 1) * (n - i);
            
            // Số mảng con độ dài lẻ
            int odd_count = (total_subarrays + 1) / 2;

            // Cộng đóng góp của phần tử arr[i]
            sum += arr[i] * odd_count;
        }

        return sum;
    }
};