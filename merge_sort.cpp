// Merge Sort

/* The Merge Sort algorithm is a sorting algorithm that is considered an example of 
the divide and conquer strategy. So, in this algorithm, the array is initially divided 
into two equal halves and then they are combined in a sorted manner. We can think of it 
as a recursive algorithm that continuously splits the array in half until it cannot be further divided. 
This means that if the array becomes empty or has only one element left, the dividing will stop, 
i.e. it is the base case to stop the recursion. If the array has multiple elements, we split the array 
into halves and recursively invoke the merge sort on each of the halves. Finally, when both the halves 
are sorted, the merge operation is applied. Merge operation is the process of taking two smaller sorted
arrays and combining them to eventually make a larger one. */

/* 
step 1: start
step 2: declare array and left, right, mid variable 
step 3: perform merge function.
        mergesort(array,left,right)
        mergesort (array, left, right)
        if left > right
        return
        mid= (left+right)/2
        mergesort(array, left, mid)
        mergesort(array, mid+1, right)
        merge(array, left, mid, right)
step 4: Stop
*/

// Time Complexity: O(n log(n))

//Auxiliary Space: O(n)

/*Space Complexity :
• In merge sort all elements are copied into an auxiliary array */ 


#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r) {
  int i = l;
  int j = m + 1;
  int k = l;

  /* create temp array */
  int temp[5];

  while (i <= m && j <= r) {
    if (arr[i] <= arr[j]) {
      temp[k] = arr[i];
      i++;
      k++;
    } 
    else {
      temp[k] = arr[j];
      j++;
      k++;
    }

  }

  /* Copy the remaining elements of first half, if there are any */
  while (i <= m) {
    temp[k] = arr[i];
    i++;
    k++;

  }

  /* Copy the remaining elements of second half, if there are any */
  while (j <= r) {
    temp[k] = arr[j];
    j++;
    k++;
  }

  /* Copy the temp array to original array */
  for (int p = l; p <= r; p++) {
    arr[p] = temp[p];
  }
}

/* l is for left index and r is right index of the 
   sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r) {
  if (l < r) {
    // find midpoint
    int m = (l + r) / 2;

    // recurcive mergesort first and second halves 
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

    // merge
    merge(arr, l, m, r);
  }
}

int main() {
  int myarray[5];
  //int arr_size = sizeof(myarray)/sizeof(myarray[0]);
  int arr_size = 5;

  cout << endl << "Enter 5 integers in any order: ";
  for (int i = 0; i < 5; i++) {
    cin >> myarray[i];
  }
  cout << endl << "Before Sorting: " << endl;
  for (int i = 0; i < 5; i++) {
    cout << myarray[i] << " ";
  }
  cout << endl;
  mergeSort(myarray, 0, (arr_size - 1)); // mergesort(arr,left,right) called

  cout << endl << "After Sorting: " << endl;
  for (int i = 0; i < 5; i++) {
    cout << myarray[i] << " ";
  }

  return 0;
}