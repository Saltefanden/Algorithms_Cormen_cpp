
include(FetchContent)
FetchContent_Declare(
    googletest
    # Specify the commit you depend on and update it regularly.
    URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

include_directories(googletest/googletest/include)
include_directories(${PROJECT_SOURCE_DIR}/include/)

include(CTest) # Include testing cmake package.
set(TEST_BINARY ${PROJECT_NAME}_test)

add_executable(${TEST_BINARY} test_insertion_sort.cpp)

target_link_libraries(${TEST_BINARY}
    insertion_sort
    gtest gtest_main
)

add_test(
    NAME test_insertion_sort
    COMMAND ${EXECUTABLE_OUTPUT_PATH}/${TEST_BINARY}
    WORKING_DIRECTORY ${EXECUTABLE_OUTPUT_PATH} 
)