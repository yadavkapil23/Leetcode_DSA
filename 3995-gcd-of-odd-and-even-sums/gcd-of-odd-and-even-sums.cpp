#include<cmath>
#include<numeric>
class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumodd = n*n;
        int sumeven = n*(n+1);

        int x = std::gcd(sumodd,sumeven);

        return x;
    }
};