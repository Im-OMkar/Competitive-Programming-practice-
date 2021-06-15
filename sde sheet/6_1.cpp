bool findIntersection(LinkedListNode* head1, LinkedListNode* head2) {
    if(head1==NULL || head2==NULL) return NULL;
    
LinkedListNode* a=head1;
    LinkedListNode* b=head2;
    
    while(a!=b){
        a= a==NULL? head2: a->next;
        b= b==NULL? head1: b->next;
    }
    return a;
}