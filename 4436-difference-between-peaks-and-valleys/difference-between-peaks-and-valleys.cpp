class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
       int peak_value=0;
       int valley_value=0;
       for(int i=1;i<nums.size()-1;i++){
        if(nums[i]>nums[i+1] && nums[i]>nums[i-1]){
            peak_value+=nums[i];
        } else if(nums[i]<nums[i+1] && nums[i]<nums[i-1]){
            valley_value+=nums[i];
        }
       }
    return (peak_value-valley_value);
    }
};