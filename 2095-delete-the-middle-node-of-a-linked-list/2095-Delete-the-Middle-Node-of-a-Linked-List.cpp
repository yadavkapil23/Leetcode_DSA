
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head == nullptr){
            return nullptr;
        }

        ListNode* temp = head;
        int count = 0;
        while(temp != nullptr){
            temp = temp->next;
            count++;
        }

         temp = head;

        int middle = count/2;
        int x  = 0;
        while(temp!=nullptr && x < middle-1){
            temp = temp->next;
            x++;
        }

        if(temp == nullptr || temp->next == nullptr){
            return nullptr;
        }

        ListNode* del = temp->next;
        temp->next = del->next;

        delete(del);

        return head;
    }
};