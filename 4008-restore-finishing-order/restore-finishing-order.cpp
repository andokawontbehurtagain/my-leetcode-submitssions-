class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_set<int>mp;
        vector<int>result;
        for(int x:friends){
            mp.insert(x);
        }
        for(int x:order){
            if(!(mp.find(x)==0)){
                result.push_back(x);
            }
        }
    return result;
    }
};