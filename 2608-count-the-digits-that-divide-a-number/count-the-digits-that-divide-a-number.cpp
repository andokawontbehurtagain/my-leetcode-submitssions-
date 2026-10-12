class Solution {
public:
    int countDigits(int num) {
        int count=0;
        int num1=num;
        while(num1>0){
            int temp=num1%10;
            num1/=10;
            if(num%temp==0){
                count++;
            }
        }
    return count;
    }
};