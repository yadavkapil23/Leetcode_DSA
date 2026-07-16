class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummynode = new ListNode(-1);
        ListNode* curr = dummynode;
        int sum = 0;
        int carry = 0;
        ListNode* t1 = l1;
        ListNode* t2 = l2;
        while(t1 != nullptr || t2 != nullptr){
            sum = carry;

            if(t1){
                sum += t1->val;
                t1 = t1->next;
            }
            if(t2){
                sum += t2->val;
                t2 = t2->next;
            }
            ListNode* newnode = new ListNode(sum%10);
            carry = sum/10;

            curr->next = newnode;
            curr = curr->next;
        }
        if(carry){
            ListNode* newnode = new ListNode(carry);
            curr->next = newnode;
            curr = curr->next;
        }

        return dummynode->next;
    }
};