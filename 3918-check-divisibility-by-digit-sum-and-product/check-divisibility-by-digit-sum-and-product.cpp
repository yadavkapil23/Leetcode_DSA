class Solution {
public:
    int addition(int n){
        int sum = 0;
        while(n>0){
            sum += n%10;
            n = n/10;
        }

        return sum;
    }

    int product(int n){
        int multi = 1;
        while(n>0){
            multi *= n%10;
            n /= 10;
        }
        return multi;
    }
    bool checkDivisibility(int n) {
        int sumation = addition(n);
        int multiply = product(n);
        int ans = sumation + multiply;
        if(n % ans == 0){
            return true;
        }
        return false;
    }
};