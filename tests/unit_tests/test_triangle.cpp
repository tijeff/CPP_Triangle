#include "gtest/gtest.h"

// System under test
#include "triangle.h"

/**
 * \brief triangle tests
 */

TEST(Tests_triangle, constructor_3_lengths) { // NOLINT(cert-err58-cpp)
    EXPECT_NO_THROW(new triangle(4, 5, 6));
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
