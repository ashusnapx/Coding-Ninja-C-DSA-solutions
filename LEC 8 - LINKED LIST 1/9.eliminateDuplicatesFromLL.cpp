Node *removeDuplicates(Node *head)
{
    if(head==NULL)
    {
return head;
    }
    Node *slow = head;
    Node *fast = head->next;
    
    //small calculations
    if(head==NULL and head->next==NULL)
    {
        return head;
    }
    
    while(fast!=NULL)
    {
        if(slow->data==fast->data)
        {
            Node *temp = fast->next;
            slow ->next = temp;
            fast=temp;
        }
        else{
            slow = slow -> next;
            fast = fast -> next;
        }
        
        
    }
    return head;
    
}
