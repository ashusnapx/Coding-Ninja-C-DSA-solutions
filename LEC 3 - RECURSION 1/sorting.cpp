#include <iostream>
using namespace std;

bool isSorted(int arr[], int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }

    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        return true;
    }
    bool isSortedNextTerm = isSorted(arr + 1, size - 1);
    return isSortedNextTerm;
}

int main()
{
    int arr[3]={3,1,2};
    // isSorted(arr, 10);
    cout << isSorted(arr, 3) << endl;
}