int length(Node *head)
{
    Node *temp=head;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}
Node *bubbleSort(Node *head)
{
    if(head==NULL)
        return head;
    int l=length(head);
    for(int i=0;i<l;i++)
    {
        Node *prev=NULL;
        Node *curr=head;
        while(curr->next!=NULL)
        {
            if(curr->data>curr->next->data)
            {
            if(prev!=NULL)
            {
                Node *temp=curr->next->next;
                 curr->next->next=curr;
                prev->next=curr->next;
               
                curr->next=temp;
                prev=prev->next;
            }
            else 
            {
              head=curr->next;
                curr->next=head->next;
                head->next=curr;
                prev=head;
            }
           
        }
            else
            {
        prev=curr;
        curr=curr->next;
            }
        }
    }
    return head;
	// Write your code here
}