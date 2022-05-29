#include<gtest/gtest.h>
#include<merge_sort.hpp>

TEST(Time, Big){
  constexpr int arr_size{100'000'000};
  int* arr = new int[arr_size];
  mergeSort(arr, 0, arr_size);
  EXPECT_LE(arr[100], arr[101]);
  delete[] arr;
}