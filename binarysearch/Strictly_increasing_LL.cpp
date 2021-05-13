bool solve(LLNode* head) {
    LLNode* p=head->next;
    while(head->next!=NULL)
    {
        if(head->val>=p->val)
        {
            return false;
        }
        //cout<<head->val;
        p=p->next;
        head=head->next;
    }
    return true;
}