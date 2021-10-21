// /************************************************************

//     Following is the structure of the node class

//     class Node {
//         public :
//         int data;
//         Node *next;

//         Node(int data) {
//             this->data = data;
//             next = NULL;
//         }
//     };

// **************************************************************/
#include <bits/stdc++.h>
using namespace std;

class Node {
   public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};


// template<typename int>
// class Node{
// public:
// int data;
// Node<int> *next;

// Node(int data)
// {
//     this -> data = data;
//     next = NULL;
// }
// };

// template<typename int>
class Stack
{
    Node *head;
    int size;
    
    /*----------------- Public Functions of Stack -----------------*/
public:
        // Implement the Constructor
        Stack()
        {
            head = NULL;
            size = 0;
        }
    int getSize()
    {
        // Implement the getSize() function
        return size;
    }

    bool isEmpty()
    {
        // Implement the isEmpty() function
        return size==0;
    }

    void push(int element)
    {
        // Implement the push() function
        Node *newNode = new Node(element);
        // newNode->data = value;
        newNode->next = head;
        head = newNode;
        size++; // number of elements present in the stack
    }

    int pop()
    {
        // Implement the pop() function
        if(isEmpty())
        {return 0;}
        int ans = head->data;
        Node *temp = head;
        head = head->next;
        delete temp;
        size--;
        return ans;
    }

    int top()
    {
        // Implement the top() function
        if(isEmpty())
        {return 0;}
        return head->data;
    }
};




int main() {
    Stack st;

    int q;
    cin >> q;

    while (q--) {
        int choice, input;
        cin >> choice;
        switch (choice) {
            case 1:
                cin >> input;
                st.push(input);
                break;
            case 2:
                cout <<st.pop() << "\n";
                break;
            case 3:
                cout << st.top() << "\n";
                break;
            case 4:
                cout << st.getSize() << "\n";
                break;
            default:
                cout << ((st.isEmpty()) ? "true\n" : "false\n")<<endl;
                break;
        }
    }
}