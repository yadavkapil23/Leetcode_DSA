class Solution {
public:
//ham duplicate elements ko remove krne k  bjay , distinct elements ko alag kr dete h isse.
    int removeElement(vector<int>& v, int val) {
        int n = v.size();
        int k = 0;

        for(int i=0 ; i<n ; i++){
            if(v[i] != val){
                v[k] = v[i];
                k++;
            }
        }
        return k;
    }
};