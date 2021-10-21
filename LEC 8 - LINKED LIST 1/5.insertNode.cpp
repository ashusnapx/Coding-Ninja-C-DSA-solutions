Node* insertNode(Node *head, int pos, int data) 
{
    // Node *temp = head;
    // Node *newNode = new Node(data);
    // int count = 0;
	//base case
    
    
    //small calculation
    if(pos==0)
    {
        Node *newNode = new Node(data);
        newNode -> next = head;
        head = newNode;
        return head;
    }
    if(head == NULL or pos<0)
    {
        return head;
    }
    ////autimotically else
        //recursive call
        Node *naya =  insertNode(head->next,pos-1,data);
    

	head -> next = naya;
    return head;
}

