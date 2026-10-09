class Solution {
public:
    string restoreString(string s, vector<int>& indices) {     
        string t;
        t.resize(s.size());
        for(int i=0;i<s.size();i++){
           t[indices[i]]=s[i]; 
        }
    return t;
    }
};