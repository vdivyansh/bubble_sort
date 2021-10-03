#include <stdio.h> 
  
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
// An optimized version of Bubble Sort 
void bubbleSort(int arr[], int n) 
{ 
   int i, j; 
   bool swapp; 
   for (i = 0; i < n-1; i++) 
   { 
     //fix for sort
     swapped = true; 
     for (j = 0; j < n-i-1; j++) 
     { 
        if (arr[j] > arr[j+1]) 
        { 
           swap(&arr[j], &arr[j+1]); 
           swapp = true; 
        } 
     } 
      if (swapp == true) 
        break; 
   } 
} 
  
/* Function to print an array */
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("n"); 
} 
  
// Driver program to test above functions 
int main() 
{ 
    //updated code to accept dynamic input
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    bubbleSort(arr, n); 
    printf("Sorted array: \n"); 
    printArray(arr, n); 
    return 0; 
} 
