class Solution {
public:
    string countAndSay(int n) {
        string result = "";

        if(n==1){
            return "1";
        }
        string say = countAndSay(n-1);
        
        for(int i=0 ; i<say.length(); i++){
            char c = say[i];
            int count = 1;

            while(i<say.length()-1 && say[i] == say[i+1]){
                count++;
                i++;
            }

            result += to_string(count) + string(1,c);
        }

        return result;
    }
};