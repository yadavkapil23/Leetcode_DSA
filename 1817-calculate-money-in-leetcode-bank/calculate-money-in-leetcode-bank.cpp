class Solution {
public:
    int totalMoney(int n) {
        int total_money = 0;
        int mid_money = 0;
        int count = 0;
        int i=1;
        while(i<=n){
            if(i%7==1){
                mid_money = count+1;
                count++;
            }
            else{
                mid_money += 1;
            }
            i++;
        total_money += mid_money;
        }
        return total_money;
    }
};