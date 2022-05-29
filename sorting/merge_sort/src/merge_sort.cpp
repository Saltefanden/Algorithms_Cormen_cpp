#include<merge_sort.hpp>

void mergeSort(int arr[], int start, int end, int copyArr[]){
  if (start<(end-1)){
    int midpoint{(start+end)/2};
    mergeSort(arr, start, midpoint, copyArr);
    mergeSort(arr, midpoint, end, copyArr);
    merge(arr, start, midpoint, end, copyArr);
  }
}


void mergeSort(int arr[], int start, int end){
  if (start<(end-1)){
    int *copyArr = new int[end-start];
    mergeSort(arr, start, end, copyArr);
    delete[] copyArr;
  }
}