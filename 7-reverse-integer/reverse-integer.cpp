class Solution {
public:
    int reverse(int x) {
        long long sum=0;
        
        while(x!=0){
            int pop =x%10;
            // Check for positive overflow before multiplying by 10
            if (sum > INT_MAX / 10 || (sum == INT_MAX / 10 && pop > 7)) {
                return 0;
            }
            
            // Check for negative overflow before multiplying by 10
            if (sum < INT_MIN / 10 || (sum == INT_MIN / 10 && pop < -8)) {
                return 0;
            }
            sum=sum*10+pop;
            x/=10;
        }
    
    return sum;
    }
};
