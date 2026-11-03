class Solution {
public:
    int minMoves(vector<int>& nums) {
        int count=0;
        int compare=*max_element(nums.begin(),nums.end());
        for(int x:nums){
            count+=(compare-x);
        }
    return count;
    }
};