class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n = bank.size();

        int prevcount = 0;
        int result = 0;

        for(int i=0 ; i<n ; i++){
            int currentcount = 0;

            for(char c : bank[i]){
                if(c == '1'){
                    currentcount++;
                }
            }

            result += (currentcount * prevcount);

            if(currentcount != 0){
                prevcount = currentcount;
            }
        }

        return result;
    }
};