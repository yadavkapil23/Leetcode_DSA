class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
    ListNode* slow = head;
    ListNode* fast = head;
    if(head==nullptr || head->next==nullptr){
        return head;
    }
    
    int len = 0;
    ListNode* x = head;
    while (x) {
    len++;
    x=x->next;
     }

    k = k % len;
    if (k == 0 || k<0) return head;


    for(int i=1;i<=k ; i++){
        fast = fast->next;
    }
    
    if(fast==nullptr){
        return head;
    }
    
    while(fast->next){
        fast=fast->next;
        slow=slow->next;
    }
    ListNode* temp = slow->next;
    slow->next=nullptr;
    fast->next=head;
    head=temp;

    return head;
    }
};