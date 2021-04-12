#include "functions.h"
#include "gtest/gtest.h"

TEST(testArray, search_maxvalue) {
    int array[6] = {22, 1, 4, 7, 20, 8};
    EXPECT_EQ(max_value_in_array(array,6),22);
}

TEST(testArray, search_minvalue) {
    int array[6] = {22, 1, 4, 7, 20, 8};
    EXPECT_EQ(min_value_in_array(array,6),1);
}

TEST(testArray, search_equal_values) {
    int array[6] = {22, 1, 4, 7, 20, 7};
    EXPECT_EQ(search_equal_values_in_array(array, 6, 7), 2);
}

TEST(testArray, search_equal_values2) {
    int array[6] = {22, 1, 4, 7, 20, 7};
    EXPECT_EQ(search_equal_values_in_array(array, 6, 1), 1);
}

TEST(testArray, search_equal_values3) {
    int array[6] = {22, 1, 4, 7, 20, 7};
    EXPECT_EQ(search_equal_values_in_array(array, 6, 5), 0);
}