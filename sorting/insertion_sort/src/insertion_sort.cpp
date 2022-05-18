#include<insertion_sort.hpp>

void insertion_sort(int* arr, int size){
  int key{0};
  int j;
  for (int i{1}; i<size; ++i){
    key = arr[i];
    j = i-1;
    while(j >= 0 && arr[j]>key){
      arr[j+1] = arr[j];
      --j;
    }
    arr[j+1] = key;
  }
}


//  c++ -g -I../include/ insertion_sort.cpp 
//  gdb a.out 


// int main(){
//   int arr[]{3,2,5,3,6,1};
//   insertion_sort(arr, 6);
//   return 0;
// }
