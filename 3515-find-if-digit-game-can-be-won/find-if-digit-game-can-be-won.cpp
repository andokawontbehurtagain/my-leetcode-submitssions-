class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int two_digit_sum=0;
        int sum=0;
        for(int num:nums){
            if(num<10){
                sum+=num;
            } else{
                two_digit_sum+=num;
            }
        }
        if(two_digit_sum==sum){
            return false;
        }
    return true;
    }
};