class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
       map<int,int> mp;
        for(int i=0;i<nums.size();i++){
           mp[nums[i]]++;
        }
        int sum=0;
    for (auto pair : mp){
        if(pair.second==1){
            sum+=pair.first;
        }
    }
    return sum;
    }
};