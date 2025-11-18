class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k){
        ListNode* temp = head;

        for(int i = 0; i < k; i++){
            if(!temp){
                return head;
            }
            temp = temp->next;
        }

        ListNode* prev = nullptr;
        ListNode* current = head;
        ListNode* next = nullptr;
        for(int i=0 ; i<k ; i++){
            ListNode* front = current->next;
            current->next=prev;
            prev = current;
            current = front;
        }

        head->next = reverseKGroup(current, k);
        return prev;
    }
};