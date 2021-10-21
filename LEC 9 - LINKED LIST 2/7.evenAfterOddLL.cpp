Node *evenAfterOdd(Node *head)
{
	Node *oddh = NULL;
    Node *oddt = NULL;
    Node *evenh = NULL;
    Node *event = NULL;
    
    while(head!=NULL)
    {
        if(head->data%2!=0)
        {
            if(oddh==NULL)
            {
                oddh = head;
                oddt = head;
                head=head->next;
            }
            else
            {
                oddt -> next = head;
                oddt = oddt -> next;
                head=head->next;
            }
        }
        
       else if(head->data%2==0)
       {
           if(evenh==NULL)
           {
               evenh = head;
               event = head;
               head=head->next;
           }
           else
           {
               event -> next = head;
               event = event -> next;
               head=head->next;
           }
       }
    }
    
    
    if(oddh==NULL)
    {
        return evenh;
    }
    if(evenh==NULL)
    {
        return oddh;
    }
    event -> next=NULL;
    oddt -> next = evenh;
    return oddh;
}