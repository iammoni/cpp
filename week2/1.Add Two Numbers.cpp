ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode* head=nullptr;
        ListNode* curr=nullptr;
        while(l1 && l2){
            int k=l1->val+l2->val+carry;
            if(k>=10) k=k-10,carry=1;
            else carry=0;
            if(!head) head=curr= new ListNode(k);
            else curr->next=new ListNode(k),curr=curr->next;
            l1=l1->next;
            l2=l2->next;
        }
        
        while(l1){
            int k=l1->val+carry;
            if(k>=10) k=k-10,carry=1;
            else carry=0;
            if(!head) head=curr= new ListNode(k);
            else curr->next=new ListNode(k),curr=curr->next;
            l1=l1->next;
        }
        
        while(l2){
            int k=l2->val+carry;
            if(k>=10) k=k-10,carry=1;
            else carry=0;
            if(!head) head=curr= new ListNode(k);
            else curr->next=new ListNode(k),curr=curr->next;
            l2=l2->next;
        }
        if(carry){
          if(!head) head=curr= new ListNode(1);
            else curr->next=new ListNode(1),curr=curr->next;
        }
        
        
        return head;
    }