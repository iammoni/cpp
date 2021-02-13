 ListNode* deleteDuplicates(ListNode* head) {
        ListNode* prev=nullptr;
        ListNode* temp=head;
        while(temp){
            
            if(!prev){
                prev=temp;
            temp=temp->next;
                continue;
            }
            
            if(prev->val==temp->val){
                prev->next=temp->next;
            }
            else{
            prev=temp;
        
            }
            temp=temp->next;
        }
        
        return head;
    }