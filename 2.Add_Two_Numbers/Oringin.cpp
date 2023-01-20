class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        long sum=0;
        long scalar=1;
        while (l1!=NULL){
            sum=sum+l1->val*scalar;
            l1=l1->next;
            scalar=scalar*10;
        }
        scalar=1;
        while (l2!=NULL){
            sum=sum+l2->val*scalar;
            l2=l2->next;
            scalar=scalar*10;
        }


        ListNode *current = new ListNode(sum%10);
        sum=sum/10;
        ListNode *result = new ListNode(0,current);
        while (sum!=0){
            current->next= new ListNode(sum%10);
            sum=sum/10;
            current=current->next;
        }
        return result->next;
    }
};
