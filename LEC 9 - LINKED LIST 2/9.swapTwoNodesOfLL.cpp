Node *swapNodes(Node *head, int i, int j)
{
	Node *temp1 = head;
    Node *temp2 = head;
    Node *temp3 = NULL,*prev1=NULL,*prev2=NULL;
    

    int count =0;
    while(temp1!=NULL and count<i)
    {	prev1 = temp1;
        temp1 = temp1 -> next;
     	count++;
    }
    //if ith node is not there
    if(count!=i) return head;
    count=0;
    
    while(temp2!=NULL and count<j)
    {	prev2 = temp2;
     	count++;
        temp2 = temp2 -> next;
    }
    
	//if jth node is not there
    if(count!=j) return head;
    
    
    prev1->next=temp2;
    prev2->next = temp1;
    
    
    if((i-j!=1)||(i-j!=-1)) 
    {
        temp3=temp1->next;
        temp1->next = temp2->next;
        temp2->next=temp3;
    }
    else 
    {
        temp1->next=temp2->next;
        temp2->next=temp1;
    }
    return head;
   	 
}