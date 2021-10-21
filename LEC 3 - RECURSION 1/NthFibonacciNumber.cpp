#include <iostream>
using namespace std;

int fib(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }

    int previousTerm = fib(n - 1);
    int previousPreviousTerm = fib(n - 2);
    return previousTerm + previousPreviousTerm;
}
int main()
{
    int n;
    cout << "enter the nth term : " ;
    cin >> n;
    cout<<fib(n) << endl;
}