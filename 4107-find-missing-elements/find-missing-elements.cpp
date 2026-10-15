class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_set<int> mp(nums.size());
      vector<int> ans;
    int max=*max_element(nums.begin(),nums.end());
    int min=*min_element(nums.begin(),nums.end());
      for(int i=0;i<nums.size();i++){
        mp.insert(nums[i]);
      }
        for (int i = min; i <= max; i++){
           if( mp.count(i) == 0){
            ans.push_back(i);
           }
        }
        return ans;
    }
};