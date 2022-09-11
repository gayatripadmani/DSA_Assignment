#include <iostream>  
using namespace std;

int main ()  
{  
    int a[5], i;   

    for (i=0; i<5; i++)  
    {
        cout << endl << "Enter a[" << i << "] : ";               
        cin >> a[i];  
    }  

    cout << endl << "\n printing the elements ....\n";   

    for(i=0; i<5; i++)  
    {  
        cout << "\n";  

        cout << a[i];
    }  
}  