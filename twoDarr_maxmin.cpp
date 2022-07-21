//finding maximum and minimum in a 2d array.

#include <iostream>
using namespace std;

int main()
{
  int m, n, largest, smallest;
  int largrowloc, largcolumnloc, smallrowloc, smallcolumnloc;
  
  // take number of rows and columns
  cout << endl << "Enter number of row and column: ";
  cin >> m >> n;

  // declare array by given number of rows and columns
  int arr[m][n], i, j;

  // take array elements as input
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
        cout << endl << "Enter array " << i << j << ": ";
        cin >> arr[i][j];
    }
    cout << endl;
  }

  // display array (optional)
  cout << "Entered 2D Array: " << endl ;
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
        cout << "\t" << arr[i][j];
    }
    cout << endl;
  }

  // assume first element is 
  // largest and smallest
  largest=arr[0][0];
  smallest=arr[0][0];

  // compare with all elements
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      if(largest<arr[i][j])
      {
        largest=arr[i][j];
        largrowloc=i;  //row location of largest element
        largcolumnloc=j;   //column location of largest element
      }

      if(smallest>arr[i][j])
      {
        smallest=arr[i][j];
        smallrowloc=i;  //row location of smallest element
        smallcolumnloc=j;  //column location of smallest element
      }
    }
  }

  // display results
  cout << endl;
  cout << endl << "Largest element in array is " << largest << " in location " << arr[largrowloc][largcolumnloc];
  cout << endl << "Smallest element in array is " << smallest << " in location" << arr[smallrowloc][smallcolumnloc] << "\n";

  return 0;
}