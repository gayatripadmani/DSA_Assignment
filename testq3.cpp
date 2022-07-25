#include<iostream>
using namespace std;

int main(int argc, char** argv) 
{
    int n;
    int temp;
    int pom;

    cout << "Enter how many numbers you want to calculate sum of digits: ";
    cin >> n;

    int a[n];
    int sum[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter numbers: ";
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        while (a[i] > 0)
        {
        temp = a[i] % 10;
        sum[i]+= temp;
        a[i] = a[i]/10; 
        }

    }

    for (int i = 0; i < n; i++)
    {
        cout << "Sum of " << i << " number is: " << sum[i] << endl;
    }

    return 0;
}
