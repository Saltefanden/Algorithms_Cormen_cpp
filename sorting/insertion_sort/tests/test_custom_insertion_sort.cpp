#include<gtest/gtest.h>
#include<custom_insertion_sort.hpp>
#include<vector>
#include<algorithm>

bool my_sorter(const int& a, const int& b){
  return a%2 == b%2 ? a<b: a%2;  // Sort ascending if same parity, otherwise odd numbers go first in array
}


TEST(Base, Smoketest){
  EXPECT_EQ(1,1);
}

TEST(CArray, SortEasyImproved){
  int arr[]{ 0, 2, 45, 10, 4, 6, 3, 9, 22, 11, 221 };
  size_t arr_size{sizeof(arr)/sizeof(arr[0])};

  std::vector<int> vec(arr, arr + arr_size);
  std::sort(vec.begin(), vec.end(), my_sorter);

  custom_insertion_sort(arr, arr_size, my_sorter );

  for (size_t i=0; i<arr_size; ++i){
    EXPECT_EQ(arr[i], vec[i]);
  }
}