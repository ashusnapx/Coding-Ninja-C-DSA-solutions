// Node *reverseLinkedListRec(Node *head)
// {
//     if(head==NULL || head->next==NULL)
//     {
//         return head;
//     }
    
//     Node *ans = reverseLinkedListRec(head->next);
  
   
//     Node* temp=ans;
//     // head->next->next=head;
//     // head->next=NULL;
//     while(temp->next!=NULL)
//     {
//         temp=temp->next;
//     }
    
//     temp->next=head;
    
//     head->next=NULL;
//     return ans;
    
// }

// bool isPalindrome(Node *h1)
// {
//     Node *temp = h1;
//     if(h1==NULL || h1->next ==NULL)
//     {
//         return true;
//     }
    
//     Node *h2 = reverseLinkedListRec(temp);
    
//     while(h1!=NULL and h2!=NULL)
//     {
//        if(h1->data!=h2->data)
//        {
//            return false;
//        }
//         h1 = h1-> next;
//         h2 = h2-> next;
//     }
    
//     return true;
    
    
    
// }


Node *reverse(Node *head)
{
    Node *curr=head;
    Node *prev=NULL;
    Node *frwd=NULL;
    
    while(curr!=NULL)
    {
        frwd=curr->next;
        curr->next=prev;
        prev=curr;
        curr=frwd;
    }
    return prev;
}
bool isPalindrome(Node *head)
{
    if(head==NULL ||head->next==NULL)
    {
        return true;
    }
    Node *slow=head;
    Node *fast=head->next;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    Node *secHead=slow->next;
    slow->next=NULL;
    Node *sec=reverse(secHead);
    Node *first=head;
    while(sec!=NULL)
    {
        if(first->data!=sec->data)
        {
            return false;
            break;
        }
        sec=sec->next;
        first=first->next;
    }
    Node *secH=reverse(sec);
    slow->next=secH;
    return true;
    
    
    //Write your code here
}