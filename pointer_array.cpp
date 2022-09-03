//Execute the program and try dry run for a[2], *a+2, a+2, *(a+2)

#include <iostream>
using namespace std;

int main ()  
{  
    int *p, i;   
    int a[5] = { 19, 18, 21, 20, 17 };

	p = a;

	cout << endl << "a + 1 : " << a + 1 << endl;
    cout << endl << "*a + 1 : " << *a + 1 << endl;
    cout << endl << "*(a + 1) : " << *(a + 1) << endl;
    cout << endl << "a[1] : " << a[1] << endl;

	return 0;
}