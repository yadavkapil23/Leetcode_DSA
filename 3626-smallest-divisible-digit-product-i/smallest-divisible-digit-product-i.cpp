class Solution {
public:
    int product(int n){
    int ans = 1;
    if (n < 0) n = -n;

    if (n == 0) return 0;

        while(n){
            ans *= n%10;
            n = n/10;
        }

        return ans;
    }


    int smallestNumber(int n, int t) {
        bool flag = false;
        int digit = 1;

        while(true){
            digit = product(n);
           if(digit % t == 0){
            return n;
           }
           n++;
        }

        return n;
    }
};