class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int L=0;
        int R=nums.size()-1;
        while(L<=R){
            long M=(L+R)/2;
            if(nums[M]==target){
                return M;
            } else if(nums[M]<target){
                L=M+1;
            } else if(nums[M]>target){
                R=M-1;
            }
        }
    return L;
    }
};