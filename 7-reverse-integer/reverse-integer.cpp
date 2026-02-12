class Solution {
public:
int reverse(int x) {
        bool negative = false;
        long long num = x;
        if(num<0){
            negative = true;
            num = -num;
        }
        
        string s = to_string(num);
        
        std::reverse(s.begin(), s.end());
        
        long long ans = stoll(s);
        
        if(negative){
            ans = -ans;
        }
        
        if(ans > INT_MAX || ans<INT_MIN){
            return 0;
        }

        return (int)ans;
}
};