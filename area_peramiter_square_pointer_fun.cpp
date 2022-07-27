#include <iostream>
using namespace std;

void square(int, int*, int*);

int main()
{
    int l, a, p;

    cout << endl << "Enter length: ";
    cin >> l;

    square(l, &a, &p);

    cout << endl << "Area of square = " << a;
    cout << endl << "Perimeter of Square = " << p;
}

void square(int l, int *as, int *ps)
{
    *as = l * l;
    *ps = 4 * l;
}