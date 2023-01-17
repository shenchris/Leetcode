class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *_dummyHead=new ListNode(0,head);
        int size=1;
        while (head!=NULL && head->next!=NULL){
            head=head->next;
            size++;
        }
        head=_dummyHead;

        for (int j=0;j<size-n;j++){
            head=head->next;
        }

        if(head->next!=NULL){
            head->next=head->next->next;
        } else{
            head->next=NULL;
        }
        return _dummyHead->next;
    }
};
