#include <stdio.h>

// swap function, so it swaps 2 integer values using pointers
void swap (int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}
int partition(int *a, int low, int high){
    //low is the starting index of the partition
    //high is the ending index, where the pivot is located
    int pivot= a[high]; // last element (a[high]) as the pivot, all elements will compare to pivot
    int i = (low - 1); // i is the boundary index for elements smaller than the pivot, at start is it one index before low cuz it hasnt processed any elements
    for (int j = low; j <= high - 1; j++) // iterates over the subarray from low to high-1, j is the current element being compared to the pivot
    {
        if (a[j] < pivot){
            // if the current element (a[j] is smaller than the pivot, it is moved to the left side of the partition)
            i++;
            swap(&a[i], &a[j]); // swap to ensure smaller elements on the left side
        }
        // at this point all elements smaller than the pivot are in the left section
    // all elements greater than or equal to the pivot are in the right section a[i+1] to a[high-1]
    }
    swap(&a[i+1], &a[high]); // The pivot (originally at a[high]) needs to be placed in its correct position.
    return (i+1); // this is the final position of the pivot
    
}

// recurivsely calls itself on the left and right partitions
void quick_sort_recursive(int *a, int low, int high){
    if (low < high){
        int pi= partition(a, low, high);
        quick_sort_recursive(a, low, pi-1);
        quick_sort_recursive(a, pi + 1, high);
    }
}
// my wrapper function
void quick_sort(int *a, int n){
    quick_sort_recursive(a, 0, n-1);
}