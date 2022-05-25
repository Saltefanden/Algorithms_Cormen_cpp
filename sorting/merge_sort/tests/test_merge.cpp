#include<gtest/gtest.h>
#include<merge.hpp>
#include<vector>
#include<algorithm>

TEST(Basic, Smoketest){
  EXPECT_TRUE(true);
}

TEST(Language, CommaAssigning){
  int arr[]{1,2,3, 0, 2, 4};
  int p = 2;
  (arr[0] = arr[p]), ++p;
  EXPECT_EQ(arr[0], 3);
  EXPECT_EQ(arr[p], 0);
}


TEST(Merging, SimpleAppend){
  int arr[]{1,2,3, 4, 5, 6};
  size_t arr_size{sizeof(arr)/sizeof(arr[0])};
  std::vector<int> vec(arr, arr + arr_size);

  merge(arr, 1, 3, arr_size-1);
  std::sort(vec.begin()+1, vec.end()-1);

  for (size_t i{0}; i<arr_size; ++i){
    EXPECT_EQ(arr[i], vec[i]) << " with i="<<i; 
  } 

}

TEST(Merging, ImbalancedSize){
  int arr[]{1,2,3, 4, 5, 6, 7, 0, 2, 4};
  size_t arr_size{sizeof(arr)/sizeof(arr[0])};
  std::vector<int> vec(arr, arr + arr_size);

  merge(arr, 1, 7, arr_size-1);
  std::sort(vec.begin()+1, vec.end()-1);

  for (size_t i{0}; i<arr_size; ++i){
    EXPECT_EQ(arr[i], vec[i]) << " with i="<<i; 
  } 
}

TEST(Merging, WorstAppend){
  int arr[]{100,200,300, 400, 500, 600, 700, 0, 2, 4};
  size_t arr_size{sizeof(arr)/sizeof(arr[0])};
  std::vector<int> vec(arr, arr + arr_size);

  merge(arr, 1, 7, arr_size-1);
  std::sort(vec.begin()+1, vec.end()-1);

  for (size_t i{0}; i<arr_size; ++i){
    EXPECT_EQ(arr[i], vec[i]) << " with i="<<i; 
  } 
}

TEST(Merging, size1){
  int arr[]{10};
  size_t arr_size{sizeof(arr)/sizeof(arr[0])};
  std::vector<int> vec(arr, arr + arr_size);

  merge(arr, 0, 1, arr_size);
  std::sort(vec.begin(), vec.end());

  for (size_t i{0}; i<arr_size; ++i){
    EXPECT_EQ(arr[i], vec[i]) << " with i="<<i; 
  } 
}

TEST(Merging, size2){
  int arr[]{12, 11};
  size_t arr_size{sizeof(arr)/sizeof(arr[0])};
  std::vector<int> vec(arr, arr + arr_size);

  merge(arr, 0, 1, arr_size);
  std::sort(vec.begin(), vec.end());

  for (size_t i{0}; i<arr_size; ++i){
    EXPECT_EQ(arr[i], vec[i]) << " with i="<<i; 
  } 
}