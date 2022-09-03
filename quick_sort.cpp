// Quick Sort

/* Like Merge Sort, QuickSort is a Divide and Conquer algorithm. It picks an element as a pivot 
and partitions the given array around the picked pivot. There are many different versions of 
quickSort that pick pivot in different ways. 

Always pick the first element as a pivot.
Always pick the last element as a pivot (implemented below)
Pick a random element as a pivot.
Pick median as the pivot.

The key process in quickSort is a partition(). The target of partitions is, given an array and 
an element x of an array as the pivot, put x at its correct position in a sorted array and put 
all smaller elements (smaller than x) before x, and put all greater elements (greater than x) after x. 
All this should be done in linear time. */

/* 

// Pseudo Code for recursive QuickSort function:

// low  –> Starting index,  high  –> Ending index /

quickSort(arr[], low, high) {

    if (low < high) {

        // pi is partitioning index, arr[pi] is now at right place /

        pi = partition(arr, low, high);

        quickSort(arr, low, pi – 1);  // Before pi

        quickSort(arr, pi + 1, high); // After pi

    }

} */

/* 

Pseudo code for partition():

/ This function takes last element as pivot, places the pivot element at its correct position 
in sorted array, and places all smaller (smaller than pivot) to left of pivot and all greater elements 
to right of pivot /

partition (arr[], low, high)

{
    // pivot (Element to be placed at right position)
    pivot = arr[high];  

    i = (low – 1)  // Index of smaller element and indicates the 
    // right position of pivot found so far

    for (j = low; j <= high - 1; j++){

        // If current element is smaller than the pivot
        if (arr[j] < pivot){
            i++;    // increment index of smaller element
            swap arr[i] and arr[j]
        }
    }
    swap arr[i + 1] and arr[high])
    return (i + 1)
} */

#include<iostream>
using namespace std;

void quick(int[],int,int);
int part(int[],int,int);
void swap(int*,int*);

int main()
{
    int a[10],i;

    for(i=0;i<10;i++)
    {
        cout<<endl<<"Enter elements: ";
        cin>>a[i];
    }

    quick(a,0,9);
    
    cout<<endl<<"After sorting: "<<endl;

    for(i=0;i<10;i++)
    {
        cout<<endl<<"   "<<a[i];
    }

    return 0;
}

void quick(int a[], int l, int h)
{
    int pindex;

    if(l<h)
    {
        pindex = part(a,l,h);
        quick(a,l,pindex-1); //recursive call for elements less than pivot
        quick(a,pindex+1,h); //recursive call for elements higher than pivot
    }
}

int part(int a[],int l,int h)
{
    int piv = a[h]; //creating pivot at high

    int i = l-1; //pointer to greater element

    for(int j=l;j<h;j++) //moving loop from low to 1 less then high
    {
        if(a[j]<=piv) //comparing elements wih pivot
        {
            i++;
            swap(&a[i],&a[j]);
        }
        
    }

    swap(&a[i+1],&a[h]); //swap pivot to its position where
                          //pivot is greater then element at i 

    return(i+1);     //returning poisition of pivot
}

void swap(int *a,int *b)
{
    int t;

    t=*a;
    *a=*b;
    *b=t;
}