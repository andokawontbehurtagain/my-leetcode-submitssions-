class Solution {
public:
    int digitFrequencyScore(int n) {
        int count=0;
        while(n>0){
            count+=n%10;
            n/=10;
        }
        return count;
    }
};