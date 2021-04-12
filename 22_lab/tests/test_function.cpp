#include "functions.h"
#include "gtest/gtest.h"

TEST(testArray, search_element_in_array) {
    int array[6] = {1, 8 ,22, -6, 1, 0};
    EXPECT_EQ(search_element_in_array(array, 6, -6) , 3);
}