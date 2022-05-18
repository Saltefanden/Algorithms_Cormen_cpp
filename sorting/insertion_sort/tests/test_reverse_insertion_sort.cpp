#include<gtest/gtest.h>
#include<reverse_insertion_sort.hpp>
#include<vector>
#include<algorithm>

TEST(Base, Smoketest){
  EXPECT_EQ(1,1);
}

TEST(CArray, SortEasyImproved){
  int arr[]{ 0, 2, 45, 10, 4, 6 };
  size_t arr_size{sizeof(arr)/sizeof(arr[0])};

  std::vector<int> vec(arr, arr + arr_size);
  std::sort(vec.begin(), vec.end(), std::greater());

  reverse_insertion_sort(arr, arr_size);

  for (size_t i=0; i<arr_size; ++i){
    EXPECT_EQ(arr[i], vec[i]);
  }
}