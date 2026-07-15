class Solution {
public:
    ListNode* merge2lists(ListNode* &L1,ListNode* &L2){
        if(!L1){
            return L2;
        }
        else if(!L2){
            return L1;
        }

        if(L1 -> val <= L2->val){
            L1->next = merge2lists(L1->next,L2);
            return L1;
        }
        else{
            L2->next = merge2lists(L2->next,L1);
            return L2;
        }

        return nullptr;
    }

    ListNode* dividelists(vector<ListNode*> &lists,int start,int end){
        int n = lists.size();

        if(n==0){
            return nullptr;
        }
        if(start > end){
            return nullptr;
        }

        if(start == end){
            return lists[start];
        }

        int mid = start + (end - start)/2;

        ListNode* L1 = dividelists(lists,start,mid);
        ListNode* L2 = dividelists(lists,mid+1,end);

        return merge2lists(L1,L2);
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size();

        if(n<=0){
            return nullptr;
        }

        return dividelists(lists,0,n-1);

    }
};