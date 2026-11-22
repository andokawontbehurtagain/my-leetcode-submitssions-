class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            int count=0;
            int temp=i;
            while(temp>0){
                if(temp%2==1){
                    count++;
                }
                temp/=2;
            }
            if(count==k){
                sum+=nums[i];
            }
        }
    return sum;
    }
};