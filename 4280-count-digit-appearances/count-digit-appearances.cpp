class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            int temp = abs(nums[i]); // Dùng abs() để xử lý cả số âm nếu có
            
            // Dùng do-while để chạy ít nhất 1 lần (đặc biệt khi temp = 0)
            do {
                int lastDigit = temp % 10;
                if (lastDigit == digit) {
                    count++;
                }
                temp /= 10;
            } while (temp > 0);
        }
            
            
    
        return count;
    }
};