#include "Geometry.h"
#include <iostream>

namespace Geometry {

    // Example function for printing points
    void printPoint(const Point& p) {
        std::cout << "Point(" << p.x() << ", " << p.y() << ", " << p.z() << ")\n";
    }

    // Example of intersection calculation
    std::vector<Point> Circle::intersect(const Circle& other) const {
        std::vector<Point> intersectionPoints;
        double d = (center.coords - other.center.coords).norm();
        if (d < radius + other.radius) {
            intersectionPoints.push_back(Point(center.x(), center.y(), 0)); // Placeholder for actual calculation
        }
        return intersectionPoints;
    }
}
