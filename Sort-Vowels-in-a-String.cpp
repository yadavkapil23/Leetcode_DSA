1class Solution {
2private:
3    bool isVowel(char c) {
4        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
5               c=='A'||c=='E'||c=='I'||c=='O'||c=='U';
6    }
7public:
8    string sortVowels(string s) {
9    vector<char> vowels;
10    
11    vector<char> v(s.begin(),s.end());
12    
13    int n = v.size();
14    for(int i=0 ; i<n ; i++){
15        if(isVowel(v[i])){
16           vowels.push_back(v[i]); 
17        }
18    }
19    
20    sort(vowels.begin(),vowels.end());
21    
22    int  j=0;
23    for(int i=0 ; i<n ; i++){
24        if(isVowel(v[i])){
25        v[i] = vowels[j];
26        j++;
27        }
28    }
29    
30    string result;
31    for(int i=0 ; i<v.size() ; i++){
32        result.push_back(v[i]);
33    }
34
35    return result;
36    }
37};