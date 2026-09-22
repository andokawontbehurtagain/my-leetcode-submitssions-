class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int trick=0;
        for(int i=0;i<nums.size();i++){
            trick+=nums[i];
        }
        if(trick%2!=0){
            trick=0;
        } else{
            trick=nums.size()-1;
        }
    return trick;
    }
};