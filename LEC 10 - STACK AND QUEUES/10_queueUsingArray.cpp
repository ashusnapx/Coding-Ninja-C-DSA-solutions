#include <bits/stdc++.h>
using namespace std;

template <typename T>
class queueUsingArray
{
    T *data;
    int nextIndex;
    int firstIndex;
    int size;
    int capacity;

public:
    queueUsingArray(int s)
    {

        data = new T[s];
        nextIndex = 0;
        firstIndex = -1;
        size = 0;
        capacity = s;
    }

    void enqueue(T element)
    {
        if(size==capacity)
        {
            cout<<"Queue is full"<<endl;
            return;
        }
        data[nextIndex] = element;
        nextIndex = (nextIndex + 1) % capacity;
        if (firstIndex == -1)
        {
            firstIndex = 0;
        }
        size++;
    }

    T front()
    {
        if(isEmpty())
        {
            cout<<"Queue is empty"<<endl;
            return 0;}
        return data[firstIndex];
    }

    T dequeue()
    {
        if(isEmpty())
        {
            cout<<"Queue is empty"<<endl;
            return 0;}
        return data[firstIndex];
        firstIndex++;
        size--;

        if(size == 0)
        {
            firstIndex = -1;
            nextIndex = 0;
        }
    }

    int getSize()
    {
        // return (nextIndex - firstIndex);
        return size;
    }

    bool isEmpty()
    {
        // return firstIndex == -1;
        return size == 0;
    }
};

int main()
{
    cout << "So basically their are 5 functions" << endl;
    cout << "1. To insert an element we use enqueue();" << endl;
    cout << "2. To delete an element we use dequeue();" << endl;
    cout << "3. To know the size of function we use size();" << endl;
    cout << "4. To check whether the queue id is empty or not isEmpty();" << endl;
    cout << "5. To access the topmost element we use front();" << endl;

    queueUsingArray<int> q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    cout<<q.front()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.getSize()<<endl;
    cout<<q.isEmpty()<<endl;


}