#include<iostream>
using namespace std;

int main()
{
    int arr[100], size, i, sum = 0;
    
    cout << endl << "Enter array size: ";
    cin >> size;

    cout << endl << "Enter array elements: ";
    for(i = 0; i < size; i++)
          cin >> arr[i];
          
    for(i = 0; i < size; i++)
          sum = sum + arr[i]; 
    
    cout << endl << "Sum of the array = " << sum;
    
    return 0;
}
