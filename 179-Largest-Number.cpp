class Solution {
public:
    string largestNumber(vector<int>& nums) {

        vector<string> arr;

        for(int x : nums){
            arr.push_back(to_string(x));
        }

        auto customcompare = [](string &s1,string &s2){
           return s1 + s2 > s2 + s1;
        };

        sort(arr.begin(),arr.end() , customcompare);

        string result = "";

        for(string a : arr){
            result += a;
        }  
 
        if(result[0] == '0')
            return "0";

        return result;
    }
};