#include <iostream>
using namespace std;

int staircase(int n)
{
    //base case 
    if(n==0)
    {
        return 1;
    }

    //recursive call
    int x = staircase(n-1);
    int y = staircase(n-2);
    int z = staircase(n-3);

    return x + y + z;
}

int main() {
    int n, output;
    cin >> n;
    output=staircase(n);
    cout<< output <<endl;
}
