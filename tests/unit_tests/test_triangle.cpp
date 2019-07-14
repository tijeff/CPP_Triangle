#include "gtest/gtest.h"

// System under test
#include "triangle.h"

/**
 * \brief triangle tests
 */

TEST(Tests_triangle, constructor_3_lengths) { // NOLINT(cert-err58-cpp)
    EXPECT_NO_THROW(new triangle(4, 5, 6));
}
