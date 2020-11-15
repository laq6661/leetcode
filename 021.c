struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    if(l1==NULL) return l2;
    if(l2==NULL) return l1;
    struct ListNode h;
    struct ListNode *i = &h;
    while(l1&&l2){
        if(l1->val<l2->val){i->next= l1;l1 = l1->next;}
        else{i->next = l2;l2=l2->next;}
        i = i->next;
    } 
    if(l2) i->next = l2;
    if(l1) i->next = l1;
    return h.next;

}
