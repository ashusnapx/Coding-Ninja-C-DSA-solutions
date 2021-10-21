/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

int length(Node *head)
{
    int count = 0;
	Node *current = head;
	while(current!=NULL)
	{
	count++;
	current = current -> next;
	}
	return count;
}
//     Node *current = head;
//     //Write your code here
//     int count = 0;
//     int data;
//     cin>>data;
    
//     Node *current = NULL;
//     Node *tail = NULL;
    
//     while(data!=-1)
//     {
//         Node *newNode = new Node(data);
//         if(current==NULL)
//         {
//             current = newNode;
//             tail = newNode;
//             count++;
//         }
//         else
//         {
//             tail -> next = newNode;
//             tail = newNode;
//             count++;
//         }
        
//         cin>>data;
//     }
    
//     return count;
    
	
