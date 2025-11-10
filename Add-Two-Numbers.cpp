/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode* dummynode = new ListNode(-1);
        ListNode* current = dummynode;
        int sum=0;
        while(l1 != nullptr || l2 != nullptr || carry){
            sum = carry;
            if(l1){
                sum = l1->val+sum;
                l1=l1->next;
            }
            if(l2){
                sum = l2->val+sum;
                l2=l2->next;
            }
            ListNode* newnode = new ListNode(sum%10);
            carry = sum/10;
            current->next = newnode;
            current=current->next;
        }
        return dummynode->next;
    }
};