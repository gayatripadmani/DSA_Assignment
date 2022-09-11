#include<iostream>

using namespace std;

int main()
{
    int a[3][4]= {{2,3,4,5}, {9,6,9,5}, {2,1,6,5}};

    cout << endl << "a+0 : " << a + 0 << "\t" << **a << endl;
    cout << endl << "(a+0)+1 : " << (a + 0)+1 << "\t" <<**(a+0)+1 << endl;
    cout << endl << "*(a+0)+1 : " << *(a + 0)+1 << "\t" << *(*(a + 0)+1) << endl;
    cout << endl << "(*(a+0)+1) : " << (*(a + 0)+1) << "\t" << *(*(a + 0)+1) << endl;
    cout << endl << "(*(a+0)+2) : " << (*(a + 0)+2) << "\t" << *(*(a + 0)+2) << endl;
    cout << endl << "*(*(a+0)+3) : " << *(*(a + 0)+3) << "\t" "\t" << (*(a + 0)+3) << endl;
    cout << endl << "(a+2) : " << (a + 2) << "\t" << **(a + 2) << endl;	
}
