#include <iostream>
using namespace std;
class Node {
	public :
	int data;
	Node *next;

	Node(int data) {
		this -> data = data;
		next = NULL;
	}
};
void print(Node *head)
    {
        // Node *temp = head;
        // while(temp!= NULL)
        // {
        //      cout<<temp->data<<" ";
        //      temp = temp->next;
        // }
        // cout<<endl;
        while(head!= NULL)
        {
             cout<<head->next<<" ";
             cout<<(*head).next<<" ";
            //  cout<<head->data<<" ";
             head = head->next;
        }
       cout<<endl;
    }
int main()
{
    //creating a node statically 
    Node n1(1);
    //storing address of nodes head node
    Node *head = &n1;
    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(5);
      n1.next = &n2;
      n2.next = &n3;
      n3.next = &n4;
      n4.next = &n5;

    print(head);  
    // print(head);  
}