class Solution {
public:
    int maximum69Number (int num) {
        int max_num=0;
        vector<int>nums;
        while(num>0){
            nums.push_back(num%10);
            num/=10;
        }
       
        for (int i = (int)nums.size() - 1; i >= 0; i--) {
    if (nums[i] == 6) {
        nums[i] = 9;
        break;
    }
        }
      for (int i = (int)nums.size() - 1; i >= 0; i--) {
    max_num = max_num * 10 + nums[i];
        }
    return max_num;
    }
};