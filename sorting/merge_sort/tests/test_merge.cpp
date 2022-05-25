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
  int arr[]{1,2,3, 0, 2, 4};
  size_t arr_size{sizeof(arr)/sizeof(arr[0])};
  std::vector<int> vec(arr, arr + arr_size);

  merge(arr, 1, 3, arr_size-1);
  std::sort(vec.begin()+1, vec.end()-1);

  for (int i{0}; i<6; ++i){
    EXPECT_EQ(arr[i], vec[i]) << " with i="<<i; 
  } 

}