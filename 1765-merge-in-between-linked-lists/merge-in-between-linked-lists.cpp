class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* first = list1;
        ListNode* second = list2;
        ListNode* temp = list1;
        ListNode* head = list1;

        for(int i=1 ; i < a && first != nullptr && first->next != nullptr ; i++){
                first = first->next;
        }

        int count2 = 0;
        while(temp != nullptr && temp->next != nullptr && count2 <= b){
                temp = temp->next;
            count2++;
        }

        first->next = second;

        while(second != nullptr && second->next != nullptr){
            second = second->next;
        }

        second->next = temp;
        

        return head;
    }
};