#include<gtest/gtest.h>
#include<merge_sort.hpp>
#include<vector>
#include<algorithm>

TEST(Basic, Smoketest){
  EXPECT_TRUE(true);
}

TEST(Sorting, Presorted){
  int arr[]{1,2,3,4,5,6};
  size_t arr_size = sizeof(arr)/sizeof(arr[0]);
  std::vector<int> vec(arr, arr+arr_size);

  mergeSort(arr, 0, arr_size);

  for (size_t i{}; i<arr_size; ++i){
    EXPECT_EQ(arr[i], vec[i]) << " for i="<< i;
  }

}


TEST(Sorting, Reversed){
  int arr[]{6, 5, 4, 3, 2, 1};
  size_t arr_size = sizeof(arr)/sizeof(arr[0]);
  std::vector<int> vec(arr, arr+arr_size);
  std::sort(vec.begin(), vec.end());

  mergeSort(arr, 0, arr_size);

  for (size_t i{}; i<arr_size; ++i){
    EXPECT_EQ(arr[i], vec[i]) << " for i="<< i;
  }

}

TEST(Sorting, size1){
  int arr[]{6};
  size_t arr_size = sizeof(arr)/sizeof(arr[0]);
  std::vector<int> vec(arr, arr+arr_size);
  std::sort(vec.begin(), vec.end());

  mergeSort(arr, 0, arr_size);

  for (size_t i{}; i<arr_size; ++i){
    EXPECT_EQ(arr[i], vec[i]) << " for i="<< i;
  }

}

TEST(Sorting, size2){
  int arr[]{6,5};
  size_t arr_size = sizeof(arr)/sizeof(arr[0]);
  std::vector<int> vec(arr, arr+arr_size);
  std::sort(vec.begin(), vec.end());

  mergeSort(arr, 0, arr_size);

  for (size_t i{}; i<arr_size; ++i){
    EXPECT_EQ(arr[i], vec[i]) << " for i="<< i;
  }

}

TEST(Sorting, sameArray){
  int arr[]{6, 6, 6, 6, 6, 6, 6, 6, 6, 6};
  size_t arr_size = sizeof(arr)/sizeof(arr[0]);
  std::vector<int> vec(arr, arr+arr_size);
  std::sort(vec.begin(), vec.end());

  mergeSort(arr, 0, arr_size);

  for (size_t i{}; i<arr_size; ++i){
    EXPECT_EQ(arr[i], vec[i]) << " for i="<< i;
  }

}

TEST(Sorting, NegativeNumbers){
  int arr[]{-1, -4, -5, -0, 1, 4, -8, 0, 0};
  size_t arr_size = sizeof(arr)/sizeof(arr[0]);
  std::vector<int> vec(arr, arr+arr_size);
  std::sort(vec.begin(), vec.end());

  mergeSort(arr, 0, arr_size);

  for (size_t i{}; i<arr_size; ++i){
    EXPECT_EQ(arr[i], vec[i]) << " for i="<< i;
  }

}