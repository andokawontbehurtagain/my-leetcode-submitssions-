class Solution {
public:
    int climbStairs(int n) {
        int previous=0;
        int current=1;
        for(int i=1;i<=n;i++){
            int next=previous+current;
            previous=current;
            current=next;
        }
        return current;
    }
};