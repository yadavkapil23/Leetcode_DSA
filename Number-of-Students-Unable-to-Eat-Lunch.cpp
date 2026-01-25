1class Solution {
2public:
3    int countStudents(vector<int>& students, vector<int>& sandwiches) {
4        
5        int n = students.size();
6        int counter;
7        while(counter != students.size()){
8            if(students[0] == sandwiches[0]){
9                students.erase(students.begin());
10                sandwiches.erase(sandwiches.begin());
11                counter = 0; //takes sanwich
12            }
13            else{
14                int x = students[0];
15                students.erase(students.begin());
16                students.push_back(x);
17                counter++; //fails to take sandwich
18            }
19        }
20        return students.size();
21    }
22};