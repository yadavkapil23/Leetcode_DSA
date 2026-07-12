class Solution {
public:
    string compressedString(string word) {
        int n = word.size();

        string comp = "";

        int count = 1;

        for(int i=0 ; i<n ; i++){
            if(i != n-1 && count < 9 && word[i] == word[i+1]){
                count++;
            }
            else{
            comp.append(to_string(count));
            comp.push_back(word[i]);
            count = 1;
            }
        }

        return comp;
    }
};