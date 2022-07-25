#include<iostream>
using namespace std;

int main()
{
    int a[10], b[10], n, i, j;
    cout << endl << "Enter how many numbers you want to calculate sum of digits: ";
    cin >> n;

    for(i=0;i<n;i++)
    {
        cout << endl << "Enter Number: ";
        cin >> a[i];

        int sum=0, temp=a[i], rev;

        while(temp>0)
        {
            rev=temp%10;
            sum=sum+rev;
            temp/=10;
        }

        b[i] = sum;
    }

    for(i=0;i<n;i++)
    { 
        cout << endl << a[i];
    }

    cout<<endl<<"Sum of array: ";
    
    for(i=0;i<n;i++)
    {
        cout << endl << b[i];
    }

    return 0;
}
