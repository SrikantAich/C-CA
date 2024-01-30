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
    sort(array,array+size);
    for(int i=0;i<size-1;i=i+2)
    {
        swap(array[i],array[i+1]);
        
    }

    for(int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}