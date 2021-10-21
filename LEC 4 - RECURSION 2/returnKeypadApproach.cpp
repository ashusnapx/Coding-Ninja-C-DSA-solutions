#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

string numpad[10] = {"","","abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", " wxyz"};

int keypad(int input, string *output)
{
    //base case
    if (input == 0 || input == 1)
    {
        output[0] = "";
        return 1;
    }

    //small calculation
    int lastDigit = input % 10;
    int nextDigit = input / 10;
    string word = numpad[lastDigit];
    int wordSize = word.length();
    string output1[10000];

    //recursive call
    int nextDigitSize = keypad(nextDigit, output1);

    int k = 0;
    for (int i = 0;i<nextDigitSize;i++)
    {
        for (int j = 0;j<wordSize;j++)
        {
            output[k++] = output1[i] + word[j];
        }
    }
    return k;
}

int main()
{
    // cout << "enter the number --> ";
    int input;
    cin >> input;

    string output[1000];
    int count = keypad(input, output);
    for (int i = 0; i < count; i++)
    {
        cout << output[i] << endl;
    }
}
/*  
like the number is 23
3 --> for recursion, 
2 --> for us
3 --> d e f
i will run from 0 to 1 means only one time
j will run from 0 to 3 means 3 times


at i=0 & j=0 --> output[0] = output1[0] + word[0]; -->output[0] = a + d;
at i=0 & j=1 --> output[1] = output1[0] + word[1]; -->output[1] = a + e;
at i=0 & j=2 --> output[2] = output1[0] + word[2]; -->output[2] = a + f;


at i=1 & j=0 --> output[0] = output1[1] + word[0]; -->output[0] = b + d;
at i=1 & j=1 --> output[1] = output1[1] + word[1]; -->output[1] = b + e;
at i=1 & j=2 --> output[2] = output1[1] + word[2]; -->output[2] = b + f;


at i=2 & j=0 --> output[0] = output1[2] + word[0]; -->output[0] = c + d;
at i=2 & j=1 --> output[1] = output1[2] + word[1]; -->output[1] = c + e;
at i=2 & j=2 --> output[2] = output1[2] + word[2]; -->output[2] = c + f;


*/