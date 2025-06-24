#include <gtest/gtest.h>
#include "Geometry.h"

using namespace Geometry;

class GeometryTest : public ::testing::Test {
protected:
    // You can set up any necessary objects here
    Circle circle1{Point(0, 0, 0), 5};
    Circle circle2{Point(3, 0, 0), 5};
    Circle circle3{Point(10, 0, 0), 5};
};

// Test for intersection of two circles
TEST_F(GeometryTest, CircleIntersectionTest) {
    auto intersections = circle1.intersect(circle2);
    EXPECT_FALSE(intersections.empty());  // Should have at least one intersection point

    intersections = circle1.intersect(circle3);
    EXPECT_TRUE(intersections.empty());  // No intersection should exist
}

// Test for boolean operation (circle intersection check)
TEST_F(GeometryTest, CircleBooleanIntersectionTest) {
    bool result = BooleanOps::isIntersecting(circle1, circle2);
    EXPECT_TRUE(result);  // Circles intersect
    
    result = BooleanOps::isIntersecting(circle1, circle3);
    EXPECT_FALSE(result); // No intersection
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
