class Solution {
public:
    bool isPalindrome(int x) {
        long long check=0;
        long long temp=x;
        

        if (x<0){
            return false;
        } else{
         while(temp>0){
            check=check * 10+ temp%10;
            temp/=10;
            }
         if(check==x){
            return true;
         } else{
            return false;
         }
        }

    }
};