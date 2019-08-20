bool detectloop(Node *head) 
{    
    Node* slow=head;
    Node* fast=head->next;
    while(1)
    {
        slow=slow->next;
        if(slow==NULL)
            break;
        fast=fast->next;
        if(fast==NULL)
            break;
        fast=fast->next;
        if(fast==NULL)
            break;
        if(fast==slow)
            return 1;
    }
    return 0;
}
