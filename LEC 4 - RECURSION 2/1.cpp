#include <cstring>
int partition(int input[], int si, int ei)
{
    int count = 0;
    int pivot = input[si];

    for (int i = si + 1; i <= ei; i++)
    {
        if (input[i] <= pivot)
            count++;
    }

    int index = si + count;
    input[si] = input[index];
    input[index] = pivot;

    int i = si;
    int j = ei;
    while (i < index && j > index)
    {
        if (input[i] <= pivot)
        {
            i++;
        }

        else if (input[j] > pivot)
        {
            j--;
        }
        else
        {
            int temp = input[i];
            input[i] = input[j];
            input[j] = temp;
            i++;
            j--;
        }
        return index;
    }
}

void modQS(int input[], int si, int ei)
{
    if (si >= ei)
    {
        return;
    }
    int p = partition(input, si, ei);
    modQS(input, si, p - 1);
    modQS(input, p + 1, ei);
}

void quickSort(int input[], int size)
{

    int si = 0;
    int ei = size - 1;
    modQS(input, si, ei);
}