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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* temp = head;
        ListNode* oddhead = nullptr;
        ListNode* oddtail = nullptr;
        ListNode* evenhead = nullptr;
        ListNode* eventail = nullptr;
        int index = 1;
        while(temp != nullptr){
            if(index%2 != 0){
                if(oddhead==nullptr){
                    oddhead=oddtail=temp;
                }
                else{
                    oddtail->next=temp;
                    oddtail=temp;
                }
            }
            else{
                if(evenhead==nullptr){
                    evenhead=eventail=temp;
                }
                else{
                    eventail->next=temp;
                    eventail=temp;
                }
            }
        temp = temp->next;
        index++;
        }
        if(oddtail) oddtail->next = evenhead;
        if(eventail) eventail->next=nullptr;
        head=oddhead;
        return oddhead;
    }
};