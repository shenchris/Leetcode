class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *dummyhead=new ListNode(0,head);
        ListNode *fast=dummyhead;
        ListNode *slow=dummyhead;
        for(int i=0;i<n;i++){
            fast=fast->next;
        }
        while (fast!=NULL && fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
        }

        if(slow->next->next!=NULL){slow->next=slow->next->next;}
        else{slow->next=NULL;}


        return dummyhead->next;
    }
};
