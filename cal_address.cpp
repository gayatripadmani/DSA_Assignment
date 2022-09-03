/* Consider Array of 5 elements, print address of 5 elements. 
Take address of 0th element and calculate address of other elements manually.*/

#include <iostream>
using namespace std;

int main ()  
{  
    int *p, i;   
    int arr[5] = { 19, 18, 21, 20, 17 };

	p = arr;

	cout << endl << "Displaying address using arrays : " << endl;

	for (i = 0; i < 5; i++) {
		cout << "arr[" << i << "] = " << &arr[i] << endl;
	}

	cout << endl << "Address of other elements manually: " << endl;

	for (int i = 0; i < 5; i++) {
        p += 4;
        cout << "arr[" << i << "] = " << (p + i) << endl;
	}

	return 0;
}