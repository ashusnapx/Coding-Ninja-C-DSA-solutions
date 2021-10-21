#include <iostream>
using namespace std;
//class creation
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
//print
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
//takeInput_Better o(n)
Node *takeInput_Better()
{
    int data;
    // cout<<"enter the number : ";
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}
//deletion codes
Node *deleteNode(Node *head ,int where)
{
    Node *head = NULL;
    Node *tail = NULL;
    int count = 0;

    while(count!=where)
    {
        if(count==where)
        {
            Node *a = tail -> next;
            Node *b = a -> next;
        }
        
    }
}
int main()
{
    Node *head = takeInput_Better();
    print(head);
    return 0;
}