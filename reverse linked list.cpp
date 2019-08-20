Node* reverseList(Node *head)
{
    Node* current=head;
    Node* prev=NULL;
    while(1)
    {
        Node* temp1=current;
        Node* temp2=current->next;
        current->next=prev;
        prev=temp1;
        current=temp2;
        if(current==NULL)
            return prev;
    }
}
