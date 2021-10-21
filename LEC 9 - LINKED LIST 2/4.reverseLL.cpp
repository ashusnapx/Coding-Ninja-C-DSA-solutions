// Node *reverseLinkedListRec(Node *head)
// {
//     if(head==NULL || head->next==NULL)
//     {
//         return head;
//     }
    
//     Node *ans = reverseLinkedListRec(head->next);
  
   
//     Node* temp=ans;
    
//     while(temp->next!=NULL)
//     {
//         temp=temp->next;
//     }
    
//     temp->next=head;
    
//     head->next=NULL;
//     return ans;
    
// }

// Node *reverseLinkedListRec(Node *head)
// {
//     if(head==NULL || head->next==NULL)
//     {
//         return head;
//     }
    
//     Node *ans = reverseLinkedListRec(head->next);
  
   
//     Node* temp=ans;
    
//     while(temp->next!=NULL)
//     {
//         temp=temp->next;
//     }
    
//     temp->next=head;
    
//     head->next=NULL;
//     return ans;
    
// }


Node *reverseLinkedListRec(Node *h)
{
    //1 2 3 4 5
    if(h==NULL || h->next == NULL)
    {
        return h;
    }
    
    Node *smallAnswer = reverseLinkedListRec(h->next); 
    //sa -> 5 4 3 2
    
    Node *temp = smallAnswer;
    while(temp->next!=NULL)
    {
        temp = temp -> next;
    }
    
    temp -> next = h;
    h -> next = NULL;
    
    return smallAnswer;
    
    
    
}

