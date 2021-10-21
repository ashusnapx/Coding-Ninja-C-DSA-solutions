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

void printIthNode(Node *head, int term)
{
    int count = 0;
    Node *tail = head;
    while(tail!=NULL)
    {
        if(count==term)
        {
            cout<<tail->data;
            break;
            //or
            //return;
        }
        else
        {
            count++;
            tail = tail -> next;
        }
    }
    
    return;
    
} 

/*
DRY RUN
LET'S SUPPOSE A LINKED LIST 

DATA = 10 , NEXT = 200 , ADDRESS = 100 , I = 0;
DATA = 20 , NEXT = 300 , ADDRESS = 200 , I = 1;
DATA = 30 , NEXT = 400 , ADDRESS = 300 , I = 2;
DATA = 40 , NEXT = 500 , ADDRESS = 400 , I = 3;
DATA = 50 , NEXT = NULL , ADDRESS = 500 , I = 4;


HEAD HAS THE VALUE STORED AS 100
TAIL ALSO HAS THE VALUE OF 100 STORED IN IT.

NOW HEAD REMAINS ON IT PLACE AND WE SEND THE TAIL TO ITERATE OVER THE
LINKED LIST.

WE'VE INITIATED A INTEGER VARIABLE COUNT WITH 0 

WE'VE MADE A WHILE LOOP WHICH RUNS UNTIL IT GETS NULL IN TAIL.

OUR FIRST CONDITION IS THAT IF THE COUNT AND TERM ARE EQUAL PRINT THE
DATA OF TAIL IE. TAIL -> DATA AND IF IT DOESN'T MATCHES DO COUNT++.



*/