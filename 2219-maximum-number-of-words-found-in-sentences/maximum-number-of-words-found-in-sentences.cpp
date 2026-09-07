class Solution {
public:
    int counter(string &s){
        int count = 0;
        stringstream ss(s);
        string word;

        while(ss >> word){
            count++;
        }

        return count;
    }
    int mostWordsFound(vector<string>& sentences) {
        int ans = 0;
        for(int i=0 ; i<sentences.size() ; i++){
            string s = sentences[i];
            int freq = counter(s);
            ans = max(freq,ans);
            
        }
        return ans;
    }
};