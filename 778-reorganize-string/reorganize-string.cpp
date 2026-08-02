class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int> freq;

        for(int i=0 ; i<s.size() ; i++){
            freq[s[i]]++;
        }

        priority_queue<pair<int,char>> pq;

        for(auto &p : freq){
            pq.push({p.second,p.first});
        }

        string ans = "";

        //as long as there are 2 diff chars , also in PQ , here the max freq element is always at top.
        while(pq.size() >= 2){
            auto first = pq.top();
            pq.pop();

            auto second = pq.top();
            pq.pop();

            ans += first.second;
            ans += second.second;

            first.first--;
            second.first--;

            if(first.first > 0){
                pq.push(first);
            }

            if(second.first > 0){
                pq.push(second);
            }
        }

            if(!pq.empty()){
                if(pq.top().first > 1){
                    return  "";
                }

                ans += pq.top().second;
            }


        return ans;
    }
};