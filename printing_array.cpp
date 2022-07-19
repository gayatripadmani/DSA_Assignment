#include <iostream>
using namespace std;

int main() 
{
    
    //Declare the array
    int arr[5];
    
    cout << endl << "Enter 5 numbers: ";
    
    //  store input from user to array
    for (int i = 0; i < 5; ++i) 
    {
        cin >> arr[i];
    } 
    
    cout << "The numbers are: ";
    
    //  print array elements
    for (int n = 0; n < 5; ++n) 
    {
        cout << arr[n] << "  ";
    }
    
    return 0;
}