project(merge_sort)
cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 17)

if(NOT CMAKE_BUILD_TYPE) # Use cmake .. -DCMAKE_BUILD_TYPE=Debug for debug
  set(CMAKE_BUILD_TYPE Release)
endif()

set(CMAKE_CXX_FLAGS "-Wall -Wextra -fPIC")
set(CMAKE_CXX_FLAGS_DEBUG "-g")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(LIBRARY_OUTPUT_NAME ${PROJECT_NAME})


include_directories(${PROJECT_SOURCE_DIR}/include)


add_subdirectory(src)

enable_testing()
add_subdirectory(tests) 

