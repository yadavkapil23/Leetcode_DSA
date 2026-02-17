class Solution {
public:
    bool rotateString(string s, string goal) {
    int n = s.size();
	
	string x = s;

	int k = 0;
    while(k<n){
    s = x;
	reverse(s.begin(),s.begin()+k);
	reverse(s.begin()+k,s.end());
    reverse(s.begin(),s.end());
    
    if(s == goal){
        return true;
    }
      k++;
    }
    return false;  
    }
};