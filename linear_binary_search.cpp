// Submit code for Linear and Binary Search.

#include <iostream>
using namespace std;

#define MAX 10

int LinearSearch(int a[], int n, int x)
{
    int i;
    
    for (i = 0; i < n; i++)
    {
        if (a[i] == x)
            return i;
    }
    return -1;
}

int BinarySearch(int a[], int l, int h, int x)
{
    int i, mid;
    
    while (l <= h)
    {
        mid = l + (h - l) / 2;

        if (a[mid] == x)
            return mid;

        if (a[mid] < x)
            l = mid + 1;

        else
            h = mid - 1;
    }
    return -1;
}

int RBinarySearch(int a[], int l, int h, int x)
{
    int i, mid;
    
    if (h >= l)
    {
        mid = l + (h - l) / 2;

        // If found at mid, then return it
        if (a[mid] == x)
            return mid;
            
        // Search the left half
        if (a[mid] > x)
            return RBinarySearch(a, x, l, mid - 1);
        
        // Search the right half
        return RBinarySearch(a, x, mid + 1, h);
    }
    return -1;
}

void inputArray(int a[], int n)
{
    int i;

    cout << endl << "Enter array elements : ";

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

int main()
{
    int a[MAX], n, s, x, pos;

    while (1)
    {
        cout << endl << "Press 1 : to search using Linear Search Algorithm";
        cout << endl << "Press 2 : to search using Non - Recursive Binary Search Algorithm";
        cout << endl << "Press 3 : to search using Recursive Binary Search Algorithm";
        cout << endl << "Press 4 : to exit" << endl ;

        cout << endl << "Choose any One from Four Menu : ";
        cin >> s;

        switch (s)
        {
            case 1:
                cout << endl << "Enter how many elements : ";
                cin >> n;

                inputArray(a, n);
                
                cout << endl << "Enter the element to be searched : ";
                cin >> x;
                
                pos = LinearSearch(a, n, x);
                
                break;

            case 2:
                cout << endl << "Enter how many elements : ";
                cin >> n;
                
                inputArray(a, n);
                
                cout << endl << "Enter the element to be searched : ";
                cin >> x;
                
                pos = BinarySearch(a, 0, n - 1, x);
                
                break;

            case 3:
                cout << endl << "Enter how many elements : ";
                cin >> n;
                
                inputArray(a, n);
                
                cout << endl << "Enter the element to be searched : ";
                cin >> x;
                
                pos = RBinarySearch(a, 0, n - 1, x);
                
                break;

            default:
                exit(0);
        }

        if (pos == -1)
            cout << endl << "Element not found" << endl;
        else
            cout << endl << "Element found at position : " << pos << endl;
    }
    return 0;
}