// Calculate sum of array elements using function and without function. Do the dry run as well.

#include <iostream>
using namespace std;

int sum(int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    sum += arr[i];
 
    return sum;
}

int main()
{
    int arr[10], n, i, sum1 = 0;

    cout << endl << "Enter number of Element : ";
    cin >> n;

    cout << endl << "Enter Elements : ";

    for(i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    // Sum of array elements without function
    for (i = 0; i < n; i++)
    {
        sum1 += arr[i];
    }
    cout << endl << "Sum of array elements uding without function : " << sum1;

    cout << "\n"; 
    
    // sum of array elements using function
    cout << endl << "Sum of array elements using function : " << sum(arr, n);

    cout << endl << "";
    return 0;
}

 