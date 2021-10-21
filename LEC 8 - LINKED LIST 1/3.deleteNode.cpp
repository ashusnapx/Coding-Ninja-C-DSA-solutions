Node *deleteNode(Node *head, int pos)
{
    //base case
   if(head==NULL)
   {
       return head;
   }
    
    Node *temp = head;
    
    if(pos==0)
    {
        head = head -> next;
        // temp -> next = NULL;
        delete temp;
        return head;
        
    }
    
	while(head != NULL and pos-1)
    {
        head = head -> next;
        pos--;
    }
    if(head == NULL)
    {
        return temp;
    }
    Node *temp2 = head -> next;
    
    if(temp2 != NULL)
    {
        head -> next = temp2 -> next;
        temp2->next = NULL;
        delete temp2;
        
    }
    
    return temp;
    
    
}
