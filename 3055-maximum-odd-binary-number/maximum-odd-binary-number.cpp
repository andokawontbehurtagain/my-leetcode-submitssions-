class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int count=0;
        string s1="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
            count++;            
        }
        }
       for(int i=0;i<s.size()-1;i++){
        if(count>1){
            s1.push_back('1');
            count--;
        } else {
            s1.push_back('0');
        }
       }
       s1.push_back('1');
    return s1;
    }
};