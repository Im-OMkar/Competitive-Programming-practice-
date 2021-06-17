/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* temp=head;
        
        
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        slow->next=revlist(slow->next);
        slow=slow->next;
        
        while(slow!=NULL){
            if(head->val!=slow->val) return false;
            head=head->next;
            slow=slow->next;
        }
        return true;
        
        
            
        }
    

     ListNode* revlist(ListNode* head){

         ListNode* prev=NULL;
         ListNode* nxt;
         
         while(head!=NULL){
             nxt=head->next;
             head->next=prev;
             prev=head;
             head=nxt;
         }
         return prev;
     }
};