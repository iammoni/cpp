bool has_cycle(SinglyLinkedListNode* head) {
SinglyLinkedListNode* slow=head;
        SinglyLinkedListNode* fast=head;
        if(!slow) return false;
        do{
            slow=slow->next;
            if(!slow) return false;
            if(!fast->next) return false;
            fast=fast->next->next;
            if(!fast) return false;
            
        }while(slow!=fast);
        
        return true;

}