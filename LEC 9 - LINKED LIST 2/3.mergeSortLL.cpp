Node *midPoint(Node *head){
    if(head==NULL)
        return head;
    Node *slow=head;
    Node *fast=head;
    while(fast->next!=NULL&&fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

Node *mergeTwoSortedLinkedLists(Node *h1, Node *h2){
    
    if(h1==NULL)
    {
        return h2;
    }
    else if(h2==NULL)
    {
        return h1;
    }
    
    Node *fhead;
    Node *ftail;
    
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

Node *mergeSort(Node *head)
{
    if(head==NULL||head->next==NULL)
        return head;
    
    Node *mid = midPoint(head);
    
    Node *head2 = mid->next;
    mid->next=NULL;
    head = mergeSort(head);
    head2 = mergeSort(head2);
    return mergeTwoSortedLinkedLists(head,head2);
}