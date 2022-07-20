// counting even odd positive negative and zero in array of 10 elements

#include<iostream>
using namespace std;

#define N 10  
  
int main()  
{  
    int a[N], i, pos = 0, neg = 0, even = 0, odd = 0, zero = 0;  

    cout << endl << "Enter " << N << " integer numbers: ";

    for(i = 0; i < N; i++)  
    {  
        cin >> a[i];

        if(a[i] == 0)  
        {  
            zero++;  
        }  

        else if(a[i] > 0)
        {
            pos++; 
        }

        else
        { 
            neg++;  
        }

        if(a[i] == 0)  
        {  
  
        }

        else if(a[i] % 2 == 0){
            even++;  
        }

        else
        {  
            odd++;
        }  
    }  

    cout << endl << "Positive Numbers: " << pos;
    cout << endl << "Negative Numbers: " << neg;
    cout << endl << "Even Numbers: " << even;
    cout << endl << "Odd Numbers: " << odd;
    cout << endl << "Zero Numbers: " << zero;
  
    return 0;  
} 