#include<gtest/gtest.h>
#include<insertion_sort.hpp>
#include<vector>
#include<algorithm>

TEST(Base, Smoketest){
  EXPECT_EQ(1,1);
}

TEST(CArray, SortEasy){
  int arr[]{ 4, 3, 2, 1, 0 };
  size_t arr_size{sizeof(arr)/sizeof(arr[0])};

  insertion_sort(arr, arr_size);

  EXPECT_EQ(arr[0], 0);
  EXPECT_EQ(arr[1], 1);
  EXPECT_EQ(arr[2], 2);
  EXPECT_EQ(arr[3], 3);
  EXPECT_EQ(arr[4], 4);

}


TEST(CArray, SortEasyImproved){
  int arr[]{ 4, 3, 2, 1, 0 };
  size_t arr_size{sizeof(arr)/sizeof(arr[0])};

  std::vector<int> vec(arr, arr + arr_size);
  std::sort(vec.begin(), vec.end());

  insertion_sort(arr, arr_size);

  for (size_t i=0; i<arr_size; ++i){
    EXPECT_EQ(arr[i], vec[i]);
  }
}


TEST(CArray, SortComplicated){
  int arr[]{ -4, 3, -2, 1, 0, 100000, 0, 0 };
  size_t arr_size{sizeof(arr)/sizeof(arr[0])};

  std::vector<int> vec(arr, arr + arr_size);
  std::sort(vec.begin(), vec.end());

  insertion_sort(arr, arr_size);

  for (size_t i=0; i<arr_size; ++i){
    EXPECT_EQ(arr[i], vec[i]);
  }
}

TEST(CArray, SortLen1Array){
  int arr[]{ 10 };
  size_t arr_size{sizeof(arr)/sizeof(arr[0])};

  std::vector<int> vec(arr, arr + arr_size);
  std::sort(vec.begin(), vec.end());

  insertion_sort(arr, arr_size);

  for (size_t i=0; i<arr_size; ++i){
    EXPECT_EQ(arr[i], vec[i]);
  }
}

TEST(CArray, SortLen0Array){
  int arr[]{  };
  size_t arr_size{sizeof(arr)/sizeof(arr[0])};

  std::vector<int> vec(arr, arr + arr_size);
  std::sort(vec.begin(), vec.end());

  insertion_sort(arr, arr_size);

  for (size_t i=0; i<arr_size; ++i){
    EXPECT_EQ(arr[i], vec[i]);
  }
}


TEST(CArray, SortBIGArray){
  
  constexpr unsigned array_size{100000};
  int arr[array_size];

  for (unsigned i{0}; i<array_size; ++i){
    arr[i] = rand()%100;
  }

  std::vector<int> vec(arr, arr + array_size);
  std::sort(vec.begin(), vec.end());

  insertion_sort(arr, array_size);

  for (size_t i=0; i<array_size; ++i){
    EXPECT_EQ(arr[i], vec[i]);
  }

}