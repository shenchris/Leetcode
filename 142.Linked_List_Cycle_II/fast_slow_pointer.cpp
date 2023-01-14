class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *fast= new ListNode(0,head);
        ListNode *slow= new ListNode(0,head);
        while (fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow){
                slow= new ListNode(0,head);
                while (fast!=slow){
                    slow=slow->next;
                    fast=fast->next;
                }
                return slow;
            }
        }
        return NULL;
    }
};
