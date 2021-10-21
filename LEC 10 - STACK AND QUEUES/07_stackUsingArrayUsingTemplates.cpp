#include <iostream>
#include <climits>
using namespace std;
template <typename T>
class StackUsingArray
{
    T *data;
    int nextIndex;
    int capacity;

public:
    /*
    1.Push 2.Pop 3.isEmpty 4.Top 5.Size
    */

    // step-1 creation of constructor
    StackUsingArray()
    {
        data = new T[100];
        nextIndex = 0;
        capacity = 100;
    }

    // step-2 insertion of elements
    void push(T element)
    {
        if (nextIndex == capacity)
        {
            T *newData = new T[2 * capacity];
            for (int i = 0; i < capacity; i++)
            {
                newData[i] = data[i];
            }
            capacity = 2 * capacity;
            delete[] data;
            data = newData;
        }
    }

    //step-3 check if stack is empty or not
    bool isEmpty()
    {
        return nextIndex==0;
    }

    //step-4 deletion of elements
    int pop()
    {
        if(isEmpty())
        {
            cout<<"The stack is empty!"<<endl;
            return INT_MIN;
        }
        nextIndex--;
        return nextIndex;
    }

    //step-5 size of stack
    int size(){
        return nextIndex;
    }

    //step-6 top element access 
    int top()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty !";
            return INT_MIN;
        }

        return data[nextIndex-1];
    }

};
int main()
{
    StackUsingArray<int> s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);

    cout<<s1.top()<<endl;
}