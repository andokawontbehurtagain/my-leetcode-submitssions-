class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> sum(accounts.size());
        int temp_max=0;
        for(int i=0;i<accounts.size();i++){
            for(int j=0;j<accounts[i].size();j++){
                sum[i]+=accounts[i][j];
            }
            if(sum[i]>temp_max){
                temp_max=sum[i];
            }
        }
    return temp_max;
    }
};