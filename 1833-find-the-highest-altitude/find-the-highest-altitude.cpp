class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int current_sum=0;
        int max_sum=0;
        for(int i=0;i<gain.size();i++){
            current_sum+=gain[i];
            max_sum=max(current_sum,max_sum);
        }
    return max_sum;
    }
};