int findNode(Node *head, int n){
    // Write your code here.
    //base case
    if(head==NULL)
    {
        return -1;
    }
    
    // small calculation
    int count = 0;
    while(head->next!=NULL)
    {
        if(head->data==n)// and head !=NULL)
        {
           return count;
        }
        
            count++;
        head=head->next;
        
    }
    return -1;
}