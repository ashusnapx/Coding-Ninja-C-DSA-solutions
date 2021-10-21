/*
Sum of Array
Send Feedback
Given an array of length N, you need to find and return the sum of all elements of the array.
Do this recursively.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Output Format :
Sum
Constraints :
1 <= N <= 10^3
Sample Input 1 :
3
9 8 9
Sample Output 1 :
26
Sample Input 2 :
3
4 2 1
Sample Output 2 :
7    
*/

#include <iostream>
using namespace std;

int sumOfElementsInArray(int arr[], int size)
{
    //base case
    if (size == 0)
    {
        return 0;
    }

    //IH Case
    int nextTerm = sumOfElementsInArray(arr + 1, size - 1);

    //IS Case
    int sum = arr[0] + nextTerm;
    return sum;
}
int main()
{
    int arr[3] = {2, 9, 5};
    cout << sumOfElementsInArray(arr, 3) << endl;
    return 0;
}