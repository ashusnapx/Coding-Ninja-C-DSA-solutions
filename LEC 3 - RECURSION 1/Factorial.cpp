/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int factorial(int a)
{
    if(a==0)
    {return 1;}
    int smallOutput = factorial(a-1);
    return a * smallOutput;
}
int main()
{
    int n;
    cout<<"enter the number : ";
    cin>>n;
    
    int output = factorial(n);
    cout<<output<<endl;

    return 0;
}
