#include<gtest/gtest.h>
#include<merge.hpp>
#include<vector>
#include<algorithm>

TEST(Basic, Smoketest){
  EXPECT_TRUE(true);
}

TEST(Merging, SimpleAppend){
  int arr[]{1,2,3, 0, 2, 4};
  size_t arr_size{sizeof(arr)/sizeof(arr[0])};
  std::vector<int> vec(arr, arr + arr_size);

  merge(arr, 0, 2, 5);
  std::sort(vec.begin(), vec.end());

  for (int i{0}; i<6; ++i){
    EXPECT_EQ(arr[i], vec[i]); 
  } 

}