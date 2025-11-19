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
    ListNode* deleteDuplicates(ListNode* head) {
    if(!head){
        return head;
    }
    ListNode* temp = head;
    ListNode* prev = nullptr;
    while(temp!=nullptr && temp->next!=nullptr){
        ListNode* nextnode = temp->next;
        while(nextnode != nullptr && temp->val == nextnode->val){
            ListNode* duplicate = nextnode;
            nextnode=nextnode->next;
            
            delete duplicate;
        }
        temp->next=nextnode;
        
        temp=temp->next;
    }  
    return head;
    } 
};