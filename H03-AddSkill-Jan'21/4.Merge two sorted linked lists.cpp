SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
            SinglyLinkedListNode* head=NULL,*curr=NULL;
    while(head1 && head2){
        if(head1->data<=head2->data){
            if(curr==NULL){
                curr=head=head1;
            }else{
                curr->next=head1;
                curr=head1;
            }
            head1=head1->next;
        }else{
            if(curr==NULL){
                curr=head=head2;
            }else{
                curr->next=head2;
                curr=head2;
            }
            head2=head2->next;
        }
    }
    while(head1){
        if(curr==NULL){
                curr=head=head1;
            }else{
                curr->next=head1;
                curr=head1;
            }
            head1=head1->next;
    }
    while(head2){
        if(curr==NULL){
                curr=head=head2;
            }else{
                curr->next=head2;
                curr=head2;
            }
            head2=head2->next;
    }
    
    return head;
                
}