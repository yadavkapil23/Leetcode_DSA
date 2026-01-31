class Solution {
public:
    int myAtoi(string s) {

        int i=0;
        int sign = 1;
        long long num = 0;
        int n = s.size();

        while(i<n && s[i] == ' '){
            i++;
        }

        if(i<n && s[i] == '-'){
            sign = -1;
            i++;
        }
        else if(i<n && s[i] == '+'){
            i++;
        }

        while(i<n && isdigit(s[i])){
            int digit = s[i] - '0';
         if (num > (INT_MAX - digit) / 10) {
                if (sign == 1)
                    return INT_MAX;
                else
                    return INT_MIN;
            }

            num = num*10+digit;
            i++;
        }
        return sign*num;
    }
};