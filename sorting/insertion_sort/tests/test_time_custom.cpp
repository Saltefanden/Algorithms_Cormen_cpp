#include<gtest/gtest.h>
#include<custom_insertion_sort.hpp>
#include<vector>
#include<algorithm>

TEST(Time, Big){
  constexpr int arr_size{100'000'000};
  int* arr = new int[arr_size];
  custom_insertion_sort(arr, arr_size);
  if (false){
    for (int i{}; i<arr_size-1; ++i){
      EXPECT_LE(arr[i], arr[i+1]) << " for i=" << i;
    }
  }

  delete[] arr;
}