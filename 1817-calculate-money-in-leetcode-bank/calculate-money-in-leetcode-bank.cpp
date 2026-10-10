class Solution {
public:
    int totalMoney(int n) {
       int total_money=0;
       int money_on_monday=1;
       int current_daily_amount=1;
       for(int i=1;i<=n;i++){
       total_money=total_money+current_daily_amount;
       if(i%7==0){
        money_on_monday++;
        current_daily_amount=money_on_monday;
       } else{
        current_daily_amount++;
       }
    }
    return total_money;
    }
};