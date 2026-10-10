class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        vector<string> ans;
        ans.resize(s.size());
        if(words.size()!=s.size()){
            return false;
        } else{
           for(int i=0;i<words.size();i++){
            if(words[i][0]!=s[i]){
                return false;
            }
           }
           return true;
            }
        }
    
};