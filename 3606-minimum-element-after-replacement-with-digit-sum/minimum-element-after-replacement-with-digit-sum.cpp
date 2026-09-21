class Solution {
public:
    int minElement(vector<int>& nums) {
           vector<int> n_nums(nums.size());
        for(int i=0;i<nums.size();i++){
            while(nums[i]>0){
                n_nums[i]+=nums[i]%10;
                nums[i]/=10;
            }
        }
        int min=n_nums[0];
          for(int i=0;i<n_nums.size();i++){
        if(n_nums[i]<min){
            min=n_nums[i];

        }

}  
        return min;
    }
};