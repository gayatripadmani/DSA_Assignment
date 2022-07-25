#include <iostream>
using namespace std;

int FindMax(int a[],int n)
{
	int i, max;
	max = a[0];

	for(i=1;i<n;i++)
	{
		if(a[i]>max)
			max =a[i];
	}
	return max;
}

int FindMin(int a[],int n)
{	
	int i, min;
	min = a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]<min)
			min =a[i];
	}
	return min;
}
int main()
{
	int i, array[50], size, max, min;

	cout << endl << "Input number of elements in array: ";
	cin>>size;

	cout << endl << "Enter " << size << " integers: ";
	for(i=0;i<size;i++)
	cin>>array[i];

	max = FindMax(array,size);
	min = FindMin(array,size); 

	cout << endl << "Maximum element in the array is:" << max << "\n";
	cout << endl << "Minimum element in the array is:" << min << "\n";
    
    return 0;
}