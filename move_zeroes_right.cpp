#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cout << "Size of the array: ";
    cin >> size;

    int array[size];

    // Input array elements
    for(int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    int j = size - 1;
    int swaps=0;
    for(int i = 0; i < j;)
    {
        if (array[i] == 0)
        {
            swap(array[i], array[j]);
            j = j - 1;
            swaps++;
        }
        else
        {
            i++;
        }
    }

    // Output the modified array

    int len=size-swaps;
    // cout<<len<<end
    sort(array,array+len);

    cout << "Modified Array: ";
    for(int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}
