// System under test
#include "triangle.h"

#include "gtest/gtest.h"
#include <iostream>
#include <sstream>


/**
 * \brief triangle tests
 */

TEST(Tests_triangle, constructor_3_lengths) { // NOLINT(cert-err58-cpp)
    EXPECT_NO_THROW(new triangle(4, 5, 6));
}

TEST(Tests_triangle, isEquilateralTrue) { // NOLINT(cert-err58-cpp)
    triangle triangle_under_test(3, 3, 3);
    EXPECT_TRUE(triangle_under_test.isEquilateral());
}

TEST(Tests_triangle, isEquilateralFalse) { // NOLINT(cert-err58-cpp)
    triangle triangle_under_test(8, 9, 10);
    EXPECT_FALSE(triangle_under_test.isEquilateral());
}

TEST(Tests_triangle, isIsoceleLengthd_1_and_2) { // NOLINT(cert-err58-cpp)
    triangle triangle_under_test(10, 10, 6);
    EXPECT_TRUE(triangle_under_test.isIsocele());
}

TEST(Tests_triangle, isIsoceleLengthd_2_and_3) { // NOLINT(cert-err58-cpp)
    triangle triangle_under_test(11, 12, 12);
    EXPECT_TRUE(triangle_under_test.isIsocele());
}

TEST(Tests_triangle, isIsoceleLengthd_1_and_3) { // NOLINT(cert-err58-cpp)
    triangle triangle_under_test(13, 12, 13);
    EXPECT_TRUE(triangle_under_test.isIsocele());
}


TEST(Tests_triangle, isRectangle_3_4_5) { // NOLINT(cert-err58-cpp)
    triangle triangle_under_test(3, 4, 5);
    EXPECT_TRUE(triangle_under_test.isRectangle());
}

TEST(Tests_triangle, isRectangle_5_3_4) { // NOLINT(cert-err58-cpp)
    triangle triangle_under_test(5, 3, 4);
    EXPECT_TRUE(triangle_under_test.isRectangle());
}

TEST(Tests_triangle, isRectangle_4_5_3) { // NOLINT(cert-err58-cpp)
    triangle triangle_under_test(4, 5, 3);
    EXPECT_TRUE(triangle_under_test.isRectangle());
}

TEST(Tests_triangle, operator_srteam_out) { // NOLINT(cert-err58-cpp)
    triangle triangle_under_test(7, 12, 8);
    std::stringstream string_triangle_under_test;
    string_triangle_under_test << triangle_under_test;
    EXPECT_STREQ("TRIANGLE: (7, 12, 8)", string_triangle_under_test.str().c_str());
}