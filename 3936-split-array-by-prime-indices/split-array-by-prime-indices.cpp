class Solution {
public:
    bool isPrime(int x){
        if(x<2){
            return false;
        }

        for(int i=2 ; i*i<=x ; i++){
            if(x%i == 0){
                return false;
            }
        }
        return true;
    }
    long long splitArray(vector<int>& nums) {
        vector<long long> A;
        vector<long long> B;

        for(int i=0 ; i<nums.size() ; i++){
            if(isPrime(i)){
                A.push_back(nums[i]);
            }
            else{
                B.push_back(nums[i]);
            }
        }

        long long a = accumulate(A.begin(),A.end(),0LL);
        long long b = accumulate(B.begin(),B.end(),0LL);

        return abs(a-b);
    }
};