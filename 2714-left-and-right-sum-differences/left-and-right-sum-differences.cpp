class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int> leftSum(n);
        vector<int> Ans(n);
        leftSum[0]=0;
        int totalsum=0;
        for(int i=0;i<n;i++){
            totalsum+=nums[i];
        }
        for(int i=1;i<n;i++){
            leftSum[i]=leftSum[i-1]+nums[i-1];
        }
        for(int i=0;i<n;i++){
            Ans[i]=abs(2*leftSum[i]-totalsum+nums[i]);
        }
    return Ans;
    }
};