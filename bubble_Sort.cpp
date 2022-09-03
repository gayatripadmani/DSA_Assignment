//Bubble Sort Algorithm

/* Bubble Sort is the simplest sorting algorithm that works by 
repeatedly swapping the adjacent elements if they are in the wrong order. 
This algorithm is not suitable for large data sets as its average and 
worst-case time complexity is quite high. */

// Time Complexity: O(n2)
//Space Complexity: O(1) 

#include<iostream>
using namespace std; 
void bubble_sort(int [],int);

int main()
{
    int a[5],i;

    for(i=0;i<5;i++)
    {
        cout<<endl<<"Enter the elements " << i << " : ";
        cin>>a[i];
    }

    bubble_sort(a,5);
    return 0;
}

void bubble_sort(int a[],int n)
{
    int i,j,t;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }

    cout<<endl<<"AFTER SORTING :"<<endl;
    
    for(i=0;i<n;i++)
    {
        cout<<endl<<" "<<a[i];
    }
}
