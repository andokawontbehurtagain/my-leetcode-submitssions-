class Solution {
public:
    string sortSentence(string s) {
        vector<string> s1(9);
        string current="";
        for(char c:s){
            if( c == ' '){
                if(!current.empty()){
                    int pos = current.back() - '0';
                    current.pop_back();
                    s1[pos - 1] = current;
                    current="";
                }
            } else {
                current+=c;
            }
    }
     if (!current.empty()) {
       int pos = current.back() - '0';
                    current.pop_back();
                    s1[pos - 1] = current;
                    current="";
        }
    string ans = "";
    for (int i=0;i<s1.size();i++){
        if (!s1[i].empty()) {      // Chỉ xử lý các vị trí có từ
        ans += s1[i] + " ";    // Thêm từ + khoảng trắng
    }
}
if (!ans.empty()) {
    ans.pop_back();
}
    // Xóa khoảng trắng thừa ở cuối cùng
    return ans;
    }
};