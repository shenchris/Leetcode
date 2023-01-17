Class Solution {
public:
    ListNode *swapPairs(ListNode *head) {
        ListNode* pre=head;
        ListNode* cur=head;
        int temp;
        if (cur==NULL or cur->next==NULL){
            return head;
        }
        cur=head->next;
        temp=pre->val;
        pre->val=cur->val;
        cur->val=temp;

        while (cur->next!=NULL && cur->next->next!=NULL){
            cur=cur->next->next;
            pre=pre->next->next;
            temp=pre->val;
            pre->val=cur->val;
            cur->val=temp;
        }
        return head;
    }
};
