// #include <bits/stdc++.h>
// class pair
// {
//     public:
//     Node *head;
//     Node *tail;  
// };

// pair reverse_LL(Node *head)
// {
//     if(head==NULL || head->next==NULL)
//     {
//         pair ans;
//         ans.head = head;
//         ans.tail = head;
//         return ans;
//     }
 
//     pair smallAnswer = reverse_LL(head->next);
    
//     smallAnswer.tail -> next = head;
//     head -> next = NULL;
//     pair ans;
//     ans.head = smallAnswer.head;
//     ans.tail = head;
//     return ans;
// }

// // Node *reverse_better(Node *head)
// // {
// //     return reverse_better(head).head;
// // }

// Node *reverseLinkedList(Node *head) 
// {
//     return reverse_better(head).head;
// }


Node *reverseLinkedList(Node *head)
{
    /*
    1 2 3 4 5
    head = &1;
    current = head = copy of &1;
    prev = null;
    jab tk current null nhi hai run kro
    1 2 3 4 5 -> 5 times run hoga loop
    
    1st time ->
    next = current -> next = &2;
    current -> next = prev
    */
    
    Node *current = head;
    Node *prev    = NULL;
    
    while(current!= NULL)
    {
        Node *next      = current -> next;
    	current -> next = prev;
    	prev            = current;
        current         = next;
    }
    return prev;
     
}
