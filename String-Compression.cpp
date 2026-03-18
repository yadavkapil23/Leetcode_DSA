1class Solution {
2public:
3    int compress(vector<char>& chars) {
4    
5    int n = chars.size();
6    int index = 0;
7    char currentchar;
8    
9    int i=0;
10    while(i<n){
11        currentchar = chars[i];
12        int count = 0;
13        
14        while(i<n && chars[i] ==  currentchar){
15            count++;
16            i++;
17        }
18        
19        //assign work
20        chars[index] = currentchar;
21        index++;
22        
23        if(count>1){
24            string count_str = to_string(count);
25            for(char c : count_str){
26                chars[index] = c;
27                index++;
28
29            }
30        }
31    }
32    return index;
33    }
34};