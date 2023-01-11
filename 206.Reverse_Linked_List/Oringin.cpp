class Solution {
public:
    ListNode *reverseList(ListNode *head) {
        ListNode* pre=NULL;
        ListNode* temp;
        ListNode* cur=head;
        while (cur){
            temp=cur->next;
            cur->next=pre;
            pre=cur;
            cur=temp;
        }
        return pre;
    }
};
