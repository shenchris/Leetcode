class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while (head !=NULL && head->val==val){
            head=head->next;
        }

        ListNode *current = head;
        while (current != NULL && current->next!= NULL){
            if (current->next->val==val){
                current->next=current->next->next;
            }
            else {
                current=current->next;
            }
        }
        return head;
    }
};

