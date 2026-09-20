class Solution {
public:
    int mirrorDistance(int n) {
        int ans=0;
        int rev_n=0;
        int d=n;
        while(n>0){
            rev_n=rev_n*10+ n%10;
            n/=10;
        }
        ans=abs(d-rev_n);
    return ans;
    }
};