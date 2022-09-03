// Insertion Sort

/* Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands. 
The array is virtually split into a sorted and an unsorted part. Values from the unsorted part are picked and placed at the correct 
position in the sorted part.

Characteristics of Insertion Sort:

This algorithm is one of the simplest algorithm with simple implementation
Basically, Insertion sort is efficient for small data values
Insertion sort is adaptive in nature, i.e. it is appropriate for data sets which are already partially sorted. */

// Time Complexity: O(N^2) 

// Auxiliary Space: O(1) 

#include<iostream>
using namespace std;

void insertion(int [],int);
int main()
{
    int a[5],i;

    for(i=0;i<5;i++)
    {
        cout<<endl<<"Enter the elements :";
        cin>>a[i];
    }

    insertion(a,5);    
   
    return 0;
}
void insertion(int a[],int n)
{
    int i,j,t,k;

    for(i=1; i<n; i++)
    {
        for(j=0; j<i; j++)
        {
            if(a[j] > a[i])
            {
                t = a[j];
                a[j] = a[i];

                for(k=i; k>j; k--)
                {
                    a[k] = a[k-1];
                }
                a[k+1] = t;
            }
        }
    }

    cout<<endl<<"AFTER SORTING "<<endl;
    
    for(i=0;i<n;i++)
    {
        cout<<endl<<" "<<a[i];
    }
}