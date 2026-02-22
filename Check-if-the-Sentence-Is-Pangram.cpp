1class Solution {
2public:
3    bool checkIfPangram(string sentence) {
4    set<char> st;
5    
6    for(int i=0 ; i<sentence.size() ; i++){
7        st.insert(sentence[i]);
8    }
9    
10    if(st.size()==26){
11        return true;
12    }
13        return false;
14    }
15};