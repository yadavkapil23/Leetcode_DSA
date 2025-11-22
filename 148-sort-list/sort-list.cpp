class Solution {
public:
    ListNode* sortList(ListNode* head) {
        //convert to array.
        vector<int> v;
        ListNode* temp = head;
        while(temp){
            v.push_back(temp->val);
            temp = temp->next;
        }

        //now sorting
        sort(v.begin(),v.end());

        //converting back to linked list.
        temp = head;
        int i=0;
        while(temp){
            temp->val=v[i];
            i++;
            temp = temp->next;
        }
        return head;
    }
};