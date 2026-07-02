1class Solution {
2public:
3    int compress(vector<char>& chars) {
4        
5        int i=0;
6        int index = 0;
7        char currentchar;
8        int n = chars.size();
9        while(i<n){
10            int count = 0;
11
12            currentchar = chars[i];
13
14            while(i<n && chars[i] == currentchar){
15                count++;
16                i++;
17            }
18
19            chars[index] = currentchar;
20            index++;
21
22            if(count > 1){
23                string count_str = to_string(count);
24                for(char c : count_str){
25                    chars[index] =  c;
26                    index++;
27                }
28            }
29        }
30
31        return index;
32    }
33};