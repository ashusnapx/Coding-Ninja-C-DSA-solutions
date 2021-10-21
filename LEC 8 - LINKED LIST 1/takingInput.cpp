#include <iostream>
using namespace std;
class Node
{
public:
    //declaring of data types
    int data;
    Node *next;

    //this is the constructor
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

//now we'll take input
Node *takeInput()
{   
    int data;
    cin>>data;
    Node *head = NULL;
    while(data!=-1)
    {
        Node *newNode = new Node(data);
        // Node n(data);
        if(head==NULL)
        {
            head = newNode;
        }
        else
        {
            head -> next = newNode;
        }
        
        cin>>data;
    }
    

}

void print(Node *head)
{
    // Node *head = head;
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
int main()
{
    //this method of taking input is not good as for 100 or 1000 inputs we've to make a lot of nodes
    //we'll create objects statically
    Node n1(1);

    //creating head
    Node *head = &n1;

    //creating data for nodes
    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(5);

    //creating next ie. memory for the storage of next node's address
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;

    //print function calling
    print(head);

}