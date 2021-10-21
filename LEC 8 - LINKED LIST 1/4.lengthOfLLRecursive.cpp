int length(Node *head) 
{
    //base case 
    if(head == NULL)
    {
        return 0;
    }
 
    int len = length(head->next);
  
    return len+1;
}