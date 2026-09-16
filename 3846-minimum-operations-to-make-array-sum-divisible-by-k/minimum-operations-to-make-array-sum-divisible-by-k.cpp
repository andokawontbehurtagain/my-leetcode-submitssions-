class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
         ios_base::sync_with_stdio(false);
         cin.tie(NULL);
        int sum=0;
        for(int i=0;i<=nums.size()-1;i++){
            sum+=nums[i];
        }
        int ans=sum%k;
        return ans;
    }
};