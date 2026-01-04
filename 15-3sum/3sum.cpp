class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& v) {
        sort(v.begin(), v.end());

        int n = v.size();
        int sum = 0;
        vector<vector<int>> result;

        for(int i=0 ; i<n-2 ; i++){
            if(i>0 && v[i] == v[i-1]){
                continue;
            }

            int left = i+1;
            int right = n-1;

            while(left < right){
                sum = v[i] + v[left] + v[right];
                if(sum == 0){
                    result.push_back({v[i],v[left],v[right]});

                    while(left < right && v[left] == v[left+1]){
                        left++;
                    }
                    while(left < right && v[right] == v[right-1]){
                        right--;
                    }
                    left++;
                    right--;
                }
                
                else if(sum < 0){
                    left++;
                }
                else{
                    right--;
                }
            }
        }

        return result;

    }
};