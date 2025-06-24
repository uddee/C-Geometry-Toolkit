#include <iostream>
#include "Geometry.h"

int main() {
    using namespace Geometry;
    
    // Create a couple of circle objects
    Circle c1(Point(0, 0, 0), 5);
    Circle c2(Point(3, 0, 0), 5);
    
    // Test intersection
    auto intersections = c1.intersect(c2);
    std::cout << "Intersections between c1 and c2: " << intersections.size() << "\n";
    
    // Boolean operation test
    if (BooleanOps::isIntersecting(c1, c2)) {
        std::cout << "The circles intersect!" << std::endl;
    } else {
        std::cout << "The circles do not intersect!" << std::endl;
    }

    return 0;
}
