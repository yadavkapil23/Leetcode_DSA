class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* first = head;
        ListNode* second = head;
        int length = 0;
        ListNode* temp = head;
        while(temp != nullptr){
            temp = temp->next;
            length++;
        }

        int count  = 1;
        while(first != nullptr && count < k){
            first = first->next;
            count++;
        }

        int count2 = 1;
        while(second != nullptr && count2 < length-k+1){
            second = second->next;
            count2++;
        }

        if(first != nullptr && second!=nullptr){
        swap(first->val,second->val);
        }

        return head;
    }
};