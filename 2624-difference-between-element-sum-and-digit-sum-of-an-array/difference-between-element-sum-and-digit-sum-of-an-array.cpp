class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int digit_sum=0;
        int element_sum=0;
        for(int i=0;i<nums.size();i++){
            element_sum+=nums[i];
            while(nums[i]>0){
                digit_sum+=nums[i]%10;
                nums[i]/=10;
            }
        }
    int ans=abs(digit_sum-element_sum);
    return ans;
    }
};