class Solution {
public:
    string restoreString(string s, vector<int>& indices) {     
        for(int i=0;i<s.size();i++){
           while (indices[i] != i) {
                int target = indices[i]; // Lưu chỉ số đích an toàn
                swap(s[i], s[target]);
                swap(indices[i], indices[target]);
           }
    }
return s;
    }
};