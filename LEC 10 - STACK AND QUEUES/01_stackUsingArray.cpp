#include <iostream>
#include <climits>
using namespace std;

class stackUsingArray
{
    int *data;
    int nextIndex;
    int capacity;

    public:
    //then we created a new constructor
    stackUsingArray(int totalSize)
    {
        //creating the array dynamically
        data = new int[totalSize];
        nextIndex = 0;
        capacity = 0;
    }

    //return the number of elements 
    int size() {
        return nextIndex;
    }

    //to check whether the stack is empty or filled
    bool isEmpty() 
    {
        /*
        if(nextIndex == 0)
        return true;
        else
        return false;
        */

       return nextIndex==0;
    }

    //to insert an element in the stack
    void push(int element)
    {
        if(nextIndex == capacity)
        {
            cout<<"Stack is full"<<endl;
            return;
        }
        data[nextIndex] = element;
        nextIndex++;
    }

    //to remove an element from the stack
    int pop()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty"<<endl;
            return INT_MIN;
        }
        
        nextIndex--;
        return nextIndex;
    }

    //to print the topmost element
    int top()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty"<<endl;
            return INT_MIN;
        }
        return data[nextIndex-1];
    }
};

int main()
{
    stackUsingArray s(5);
    s.push(10);
    cout<<s.top();
    cout<<s.size();
    cout<<s.isEmpty();
    s.pop();
    cout<<s.top();
    cout<<s.size();
    cout<<s.isEmpty();
}