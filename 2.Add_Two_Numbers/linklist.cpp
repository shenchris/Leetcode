class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *dummy = new ListNode(-1), *cur = dummy;
        int carry = 0;
        int val1=0;
        int val2=0;
        while (l1 || l2) {

            // int val1 = l1 ? l1->val : 0;
            if (l1!=NULL){
                val1=l1->val;
            } else{
                val1=0;
            }

            int val2 = l2 ? l2->val : 0;

            int sum = val1 + val2 + carry;
            carry = sum / 10;

            cur->next = new ListNode(sum % 10);
            cur = cur->next;
            // if l1!=NULL, l1-l1->next
            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
        }
        
        // after l1 and l2 finished calculation
        if (carry) cur->next = new ListNode(1);
        return dummy->next;
    }
};
