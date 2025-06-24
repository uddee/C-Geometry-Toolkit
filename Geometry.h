#ifndef GEOMETRY_H
#define GEOMETRY_H

#include <Eigen/Dense>
#include <vector>

namespace Geometry {

    // Basic Point and Vector Class
    class Point {
    public:
        Eigen::Vector3d coords;

        Point(double x, double y, double z) : coords(x, y, z) {}

        double x() const { return coords.x(); }
        double y() const { return coords.y(); }
        double z() const { return coords.z(); }

        // Other utility functions can go here
    };

    // Basic Line Class
    class Line {
    public:
        Point start, end;

        Line(Point start, Point end) : start(start), end(end) {}

        // Method to get vector direction of the line
        Eigen::Vector3d direction() const {
            return end.coords - start.coords;
        }
    };

    // Basic Circle Class
    class Circle {
    public:
        Point center;
        double radius;

        Circle(Point center, double radius) : center(center), radius(radius) {}

        // Intersection detection with another Circle (simplified)
        std::vector<Point> intersect(const Circle& other) const {
            std::vector<Point> intersectionPoints;
            // Simplified for two circles intersecting
            double d = (center.coords - other.center.coords).norm();
            if (d < radius + other.radius) {
                // Find intersection points (This is just a basic intersection check)
                intersectionPoints.push_back(Point(center.x(), center.y(), 0)); // Placeholder
            }
            return intersectionPoints;
        }
    };
    
    // Boolean Operations (union, intersection, etc.)
    class BooleanOps {
    public:
        static bool isIntersecting(const Circle& c1, const Circle& c2) {
            return (c1.center.coords - c2.center.coords).norm() < (c1.radius + c2.radius);
        }
    };

}
#endif // GEOMETRY_H
