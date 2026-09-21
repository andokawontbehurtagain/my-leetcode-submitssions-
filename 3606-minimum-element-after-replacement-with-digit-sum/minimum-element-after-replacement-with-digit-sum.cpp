class Solution {
public:
    int minElement(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int min_val=INT_MAX;
        for(int i=0;i<nums.size();i++){
             int temp=nums[i];
             int sum=0;
            while(temp>0){
                sum+=temp%10;
                temp/=10;
            }
        min_val=min(min_val,sum);
        }
    return min_val;
    }
};