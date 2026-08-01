class Solution {
public:
    int hammingWeight(int n) {
    string x = bitset<64>(n).to_string();
    int ones = count(x.begin(),x.end(),'1');

    return ones;
    }
};