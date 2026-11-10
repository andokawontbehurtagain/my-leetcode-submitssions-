class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int R=numbers.size()-1;
        int L=0;
        while(L<R){
            if(numbers[L]+numbers[R]==target){
                break;
            } else if(numbers[L]+numbers[R]>target){
                R--;
            } else{
                L++;
            }
        }
    return {L+1,R+1};
    }
};