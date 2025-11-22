class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while(head && head->val==val){
                ListNode* tobedeleted = head;
                head=head->next;
                delete(tobedeleted);
        }

        if(head==nullptr){
            return nullptr;
        }
        ListNode* temp = head;
        ListNode* prev = nullptr;
            while(temp){
                if(temp->val==val){
                prev->next=temp->next;
                ListNode* del = temp;
                temp = temp->next;
                delete(del);
                }
                else{
                    prev=temp;
                    temp=temp->next;
            }
            }
        return head;
    }
};