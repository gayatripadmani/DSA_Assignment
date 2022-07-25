#include<iostream>
using namespace std;

int main()
{
 
 
   int arr[10], num ;
 
   cout << endl << "Please enter the Size of array with Max size 10: ";
   cin >> num;
 
   cout << endl << "Please enter the elements in this Array: ";
   for(int i=0; i < num; i++)
      cin >> arr[i];
 
  int reverseArr[num];
 
 
  int i = 0;
  int j = num-1;
 
  while(j>=0) 
  {
   reverseArr[i] = arr[j];
   i++; 
   j--; 
  }
 
  cout << endl << "The Reverse of array entered by you is: ";
 
  for (int i = 0; i < num; ++i)
  {
       cout << reverseArr[i];
  }
 
  return 0;
}