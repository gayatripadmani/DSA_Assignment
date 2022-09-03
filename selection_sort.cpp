// Selection Sort Algorithm

/* The selection sort algorithm sorts an array by repeatedly finding the 
minimum element (considering ascending order) from unsorted part and putting 
it at the beginning. The algorithm maintains two subarrays in a given array.

The subarray which is already sorted. 
Remaining subarray which is unsorted.

In every iteration of selection sort, the minimum element (considering ascending order) 
from the unsorted subarray is picked and moved to the sorted subarray. */

/* Complexity Analysis of Selection Sort:
Time Complexity: The time complexity of Selection Sort is O(N^2) as there are two nested loops:

One loop to select an element of Array one by one = O(N)
Another loop to compare that element with every other Array element = O(N)
Therefore overall complexity = O(N)*O(N) = O(N*N) = O(N2) */


#include<iostream>
using namespace std;

void sele(int [] ,int);

int main()
{
    int a[10],i, n;

    // cout<<endl<<"Enter Number of Element: ";
    // cin>>n;

    for(i=0;i<10;i++)
    {
        cout<<endl<<"Enter Element a[" << i << "] : ";
        cin>>a[i];
    }

    sele(a,10);

    cout<<endl<<"ARRAY AFTER SORTING"<<endl;

    for(i=0;i<10;i++)
    {
        cout<<endl<<a[i];
    }

    return 0;
}

void sele(int a[],int n)
{
    int i,j,t;

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
}