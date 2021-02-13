ListNode* reverse(ListNode* node){
        ListNode* prev=nullptr;
        ListNode* next=nullptr;
        while(node){
            next=node->next;
            node->next=prev;
            prev=node;
            node=next;
        }
        
        return prev;
    }
    bool isPalindrome(ListNode* head) {
    ListNode* temp=head;
        int n=0;
        while(temp){
            n++;
            temp=temp->next;
        }
        int k=n/2;
        temp=head;
        while(temp && k){
          temp=temp->next;
            k--;
        }
        
        if(n&1){
            temp=reverse(temp->next);
        }else{
           temp=reverse(temp);
        }
        while(temp){
            if(temp->val!=head->val) return false;
            temp=temp->next;
            head=head->next;
        }
        return true;
        
    }