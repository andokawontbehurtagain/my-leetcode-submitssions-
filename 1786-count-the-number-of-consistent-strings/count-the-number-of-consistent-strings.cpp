class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> allowed_set(allowed.begin(), allowed.end());
         int consistent_count= 0;
        for(int i=0;i<words.size();i++){
            bool is_consistent=true;
            for(int j=0;j<words[i].size();j++){
                if(allowed_set.count(words[i][j]) == 0){
                    is_consistent=false;
                    break;
                }
            }
            if(is_consistent){
                consistent_count++;
            }
        }               
        return consistent_count;
    }
};