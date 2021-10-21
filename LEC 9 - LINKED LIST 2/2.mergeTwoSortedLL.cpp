Node *mergeTwoSortedLinkedLists(Node *h1, Node *h2)
{
    // 2 5 8 12 -1
	// 3 6 9 -1
    
    if(h1==NULL)
    {
        return h2;
    }
    else if(h2==NULL)
    {
        return h1;
    }
    
    Node *fhead = NULL;
    Node *ftail = NULL;
    
    if(h1->data<h2->data)
    {
        fhead = h1;
        ftail = h1;
        h1 = h1->next;
    }
    else
    {
        fhead = h2;
        ftail = h2;
        h2 = h2->next;
    }
    
    while(h1!=NULL and h2!=NULL)
    {
        if(h1->data<h2->data)
        {
            ftail -> next = h1;
            ftail = h1;
            h1 = h1 -> next;
            
            
        }
        else
        {
            ftail -> next = h2;
            ftail = h2;
            h2 = h2 -> next;
        }
    }
    
    //ab kuch nodes bach gye hone
    if(h1!=NULL)
    {
        ftail -> next = h1;
    }
    else if(h2!=NULL)
    {
        ftail -> next = h2;
    }
    
    return fhead;
}

/*

Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
    Node *fhead=NULL;
    Node *ftail=NULL;
   if(head1==NULL)
   {
       return head2;
   }
    if(head2==NULL)
    {
        return head1;
    }
    if(head1->data<head2->data)
    {
        fhead=head1;
        ftail=head1;
        head1=head1->next;
    }
    else
    {
        fhead=head2;
        ftail=head2;
        head2=head2->next;
    }
    while(head1!=NULL && head2!=NULL)
    {
        if(head1->data<head2->data)
        {
            ftail->next=head1;
            ftail=ftail->next;
            head1=head1->next;
            
        }
        else
        {
            ftail->next=head2;
            ftail=ftail->next;
            head2=head2->next;
        } 
    }
    if(head1!=NULL)
    {
        ftail->next=head1;
    }
    if(head2!=NULL)
    {
        ftail->next=head2;
    }    
 
    return fhead;
    //Write your code here
}*/