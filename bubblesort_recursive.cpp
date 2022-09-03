//C++ code for recursive bubble sort algorithm

#include <iostream>
using namespace std;

void bubblesort_recursive(int arr[], int n)
{
    if (n == 0 || n == 1)
    {
        return;
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    bubblesort_recursive(arr, n - 1);
}
int main()
{
    int arr[5] = {2, 5, 1, 6, 9};

    bubblesort_recursive(arr, 5);
    
    cout << endl << "Sorting Array: ";

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}