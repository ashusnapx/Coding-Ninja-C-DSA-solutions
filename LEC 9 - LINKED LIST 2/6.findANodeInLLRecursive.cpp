int findNodeRec(Node *head, int n)
{
    int count = 0;
    //base case
	if(head==NULL)
    {
        return -1;
    }
    if(head->data==n)
    {
        return 0;
    }
    
    //1 2 3 4 5
    //2 3 4 5
    /*
    
    */
    
    //recursive call
    int ans = findNodeRec(head->next,n);
    
    if(ans == -1)
        return -1;
    
    return ans + 1;
    
}