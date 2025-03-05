#include "merge_sort.h"
#include <stdlib.h>

void merge(int *a, int left, int mid, int right){
    int n1 = mid - left +1;
    int n2 = right- mid;
    // using malloc to dynamically allocate
    int *L = (int*)malloc(n1 * sizeof(int));
    int *R= (int*)malloc(n2 * sizeof(int));

    // copies elements into temp array L and R
    for (int i = 0; i < n1; i++) 
        L[i] = a[left + i];
    for (int i = 0; i < n2; i++) 
        R[i] = a[mid + 1 + i];
     
    // merging temp arrays back into single array a[] in sorted order
    int i = 0; 
    int j = 0;
    int k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) a[k++] = L[i++];
        else a[k++] = R[j++];
        }

    // copying the remaining elements in array L[]
    while (i < n1) 
        a[k++] = L[i++];
    // copying the remaining elements in array R[]
    while (j < n2) 
        a[k++] = R[j++];
    // free allocated memeory     
    free(L);
    free(R);
}
// splits array into smaller parts 
 void merge_sort_recursive(int *a, int left, int right){
    // if left is not less than right, the array is already sorted (only one element remains)
    if (left < right) { 
        int mid = left + (right - left) / 2; // finding the midpoint of the array segment
        merge_sort_recursive(a, left, mid);  // continue splitting this till one element remains
        merge_sort_recursive(a, mid + 1, right); // cals merge_sort_recursive on the right half, continues splittinf until one element remains 
        merge(a, left, mid, right); //Merges the two sorted halves (a[left:mid] and a[mid+1:right]) back together.
    }
 }
 // my wrapper for merge sort 
 void merge_sort(int *a, int n){
    merge_sort_recursive(a, 0, n-1);
 }