#include "gtest/gtest.h"

// System under test
#include "triangle.h"

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

//TEST(Tests_triangle, isEquilateralFalse) { // NOLINT(cert-err58-cpp)
//    triangle triangle_under_test(8, 9, 10);
//    EXPECT_FALSE(triangle_under_test.isEquilateral());
//}
