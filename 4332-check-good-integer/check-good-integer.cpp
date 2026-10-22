class Solution {
public:
    bool checkGoodInteger(int n) {
        int squareSum=0;
        int digitSum=0;
        while(n>0){
            digitSum+=n%10;
            squareSum+=pow(n%10,2);
            n/=10;
        }
        if(squareSum-digitSum>=50){
            return true;
        } else{
            return false;
        }
    }
};