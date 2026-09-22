class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int count = 0;
        int n = arr.size();
        
        // Mảng tần suất cho giá trị arr[i] (0 <= arr[i] <= 1000)
        vector<int> cnt(1001, 0);

        for (int j = 0; j < n; ++j) {
            // Tạo mảng Prefix Sum từ mảng tần suất cnt
            vector<int> pref(1002, 0);
            for (int v = 0; v <= 1000; ++v) {
                pref[v + 1] = pref[v] + cnt[v];
            }

            // Duyệt k ở bên phải j
            for (int k = j + 1; k < n; ++k) {
                if (abs(arr[j] - arr[k]) <= b) {
                    // Cắt khoảng giao giữa điều kiện a và c
                    int L = max(0, max(arr[j] - a, arr[k] - c));
                    int R = min(1000, min(arr[j] + a, arr[k] + c));

                    if (L <= R) {
                        // Đếm số lượng arr[i] nằm trong khoảng [L, R] trong O(1)
                        count += pref[R + 1] - pref[L];
                    }
                }
            }

            // Sau khi duyệt xong k cho j hiện tại, 
            // thêm arr[j] vào mảng tần suất để làm arr[i] cho các j sau
            cnt[arr[j]]++;
        }

        return count;
    }
};