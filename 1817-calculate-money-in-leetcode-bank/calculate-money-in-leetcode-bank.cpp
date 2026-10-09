class Solution {
public:
    int totalMoney(int n) {
        int week=n/7;
        int day=n%7;
        int ans=((week*(56+7*(week-1)))+(day*((week+1)+(week+day))))/2;
        return ans;
     
    }
};