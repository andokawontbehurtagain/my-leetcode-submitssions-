class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        for(int i=0;i<s.size();i++){
            sum+= (219 - s[i]- 96 )*(i+1);
        }
        return sum;
    } 
};