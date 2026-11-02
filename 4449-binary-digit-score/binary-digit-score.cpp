class Solution {
public:
    int calculateScore(int a, int b) {
        int s1=0;
        int s2=0;
        while(a>0 || b>0){
            if(a%2==1){
                s1++;
            }
            if(b%2==1){
                s2++;
            }
            a/=2;
            b/=2;
        }
        if(s1<s2){
            return s2/s1;
        }
    return (s1*s2);
    }
};