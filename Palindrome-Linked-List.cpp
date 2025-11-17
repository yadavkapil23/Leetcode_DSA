class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* curr = slow;
        ListNode* prev = nullptr;
        while(curr != nullptr){
            //now reversing from here.
            ListNode* next = curr->next;
            curr->next = prev;
            prev =curr;
            curr = next;
        }
        ListNode* p1 = head;
        ListNode* p2 = prev;
        while(p2 != nullptr){
            if(p1->val != p2->val){
                return false;
            }
            p1 = p1->next;
            p2 = p2->next;
        }
        return true;
    }
};