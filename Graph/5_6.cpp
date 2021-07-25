class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *dig1= l1;
        ListNode *dig2=l2;
        ListNode *dummy= new ListNode(0);
        ListNode *temp=dummy;
        int carry=0;
        while(dig1!=NULL or dig2!=NULL){
            int x= (dig1!=NULL)? dig1->val:0;
            int y= (dig2!=NULL)? dig2->val:0;
             int sum=carry+x+y;
            carry=sum/10;
            temp->next=new ListNode(sum%10);
            temp=temp->next;
            if(dig1!=NULL) dig1=dig1->next;
            if(dig2!=NULL) dig2=dig2->next;
        }
        if(carry>0){
            temp->next=new ListNode(carry);
        }
        return dummy->next;
    }
};