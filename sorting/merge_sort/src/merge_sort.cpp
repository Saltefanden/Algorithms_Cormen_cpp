#include<merge_sort.hpp>

void mergeSort(int* arr, int start, int end){
  if (start<(end-1)){
    int midpoint{(start+end)/2};
    mergeSort(arr, start, midpoint);
    mergeSort(arr, midpoint, end);
    merge(arr, start, midpoint, end);
  }


}