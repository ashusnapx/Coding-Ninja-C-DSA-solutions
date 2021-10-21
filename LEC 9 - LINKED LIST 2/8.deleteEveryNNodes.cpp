Node *skipMdeleteN(Node *head, int M, int N)
{
    if(head==NULL)
        return head;
    if(M==0)
        return NULL;
    if(N==0)
        return head;
    Node *t1=head;
   
    while(t1!=NULL)
    {
        for(int i=0;i<M-1 && t1!=NULL;i++)
            t1=t1->next;
         Node *t2=NULL;
        if(t1!=NULL)
         t2=t1->next;
        for(int i=0;i<N && t2!=NULL;i++)
            t2=t2->next;
        if(t1!=NULL)
        {
        t1->next=t2;
            t1=t1->next;
        }
    }
  
    return head;
   
    
	// Write your code here
}