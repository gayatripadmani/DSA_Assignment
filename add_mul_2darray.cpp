#include <iostream>
using namespace std;

int main() {
    int arr1[3][3];
    int arr2[3][3];
    int mul[3][3];
    int i, j;

    cout << endl << "Enter Value of Matrix1: " << endl;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cout << endl << "arr[ " << i << " ][ " << j << " ] : ";
            cin >> arr1[i][j];
        }
    }

    cout << endl << "Enter Value of Matrix2: " << endl;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cout << endl << "arr[ " << i << " ][ " << j << " ] : ";
            cin >> arr2[i][j];
        }
    }

    cout << endl << "Sum of two matrix is : " << endl;

    for(i = 0; i < 3; ++i){
        for(j = 0; j < 3; ++j){
            cout << arr1[i][j] + arr2[i][j] << "  ";
            if(j == 3 - 1){
                cout << endl;
            }
        }
    }
    cout<<endl;
    
    for(i = 0; i < 3; ++i){
        for(j = 0; j < 3; ++j) {
            mul[i][j] = 0;
        }
    }

    for(i = 0; i < 3; ++i){
        for(j = 0; j < 3; ++j){
            for(int k = 0; k < 3; ++k){
                mul[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    cout << endl << "Multiplication of two matrix is : " << endl;

    for(i = 0; i < 3; ++i){
        for(j = 0; j < 3; ++j){
            cout << " " << mul[i][j];
                if(j == 3 - 1)
                    cout << endl;
        }
    }

    return 0;
}