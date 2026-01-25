class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        
        int n = students.size();
        int counter;
        while(counter != students.size()){
            if(students[0] == sandwiches[0]){
                students.erase(students.begin());
                sandwiches.erase(sandwiches.begin());
                counter = 0; //takes sanwich
            }
            else{
                int x = students[0];
                students.erase(students.begin());
                students.push_back(x);
                counter++; //fails to take sandwich
            }
        }
        return students.size();
    }
};