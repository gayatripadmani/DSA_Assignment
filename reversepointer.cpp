// WAP TO CAL SUM OF DIGIT AND REVERSE OF A NO. USING POINTER AND UDF

#include <iostream>
using namespace std;

void number(int, int*, int*);

int main()
{
    int num, rev, sum;

    cout << endl << "Enter a Number: ";
    cin >> num;

    number(num, &rev, &sum);

    cout << endl << "Sum of number of " << num << " is " << sum;
    cout << endl << "Reverse number of " << num << " is " << rev;

    return 0;
}

void number(int n, int *r, int *s)
{
    int rem;

    *r = 0;
    *s = 0;

    while ( n > 0)
    {
        rem = n % 10; 
        *s += rem;
        *r = (*r * 10) + rem;
        n = n / 10;
    }
    
}
