class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
      int sum=0;
      vector<int> freq(101);
      for(int x:nums){
        if(freq[x] == 0){
            sum+=x;
            freq[x]++;
        }
        else if(freq[x]==1){
            sum-=x;
            freq[x]++;
        } else{
            freq[x]++;
        }
      }
      return sum;
    }
};