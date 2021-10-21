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
    stackUsingArray()
    {
        //creating the array dynamically
        data = new int[4];
        nextIndex = 0;
        capacity = 4;
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
            int *newData = new int[2*capacity];
            for(int i = 0; i < capacity;i++)
            {
                newData[i] = data[i];
            }
            capacity*=2;
            delete [] data;
            data = newData;
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
    stackUsingArray s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.top();
    s.pop();
    s.top();
    s.top();
    s.top();
    s.isEmpty();
    cout<<s.top()<<endl;
    
}