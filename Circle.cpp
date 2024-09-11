#include "Circle.h"

// Default constructor - initializes circle at the origin with radius 0
Circle::Circle() : center(Point(0, 0)), radius(0) {}

// Parameterized constructor
Circle::Circle(const Point& centerPoint, double r) : center(centerPoint), radius(r) {}

// Getter for center
Point Circle::getCenter() const {
    return center;
}

// Getter for radius
double Circle::getRadius() const {
    return radius;
}

// Setter for center
void Circle::setCenter(const Point& centerPoint) {
    center = centerPoint;
}

// Setter for radius
void Circle::setRadius(double r) {
    radius = r;
}

// Calculate the area of the circle
double Circle::area() const {
    return M_PI * radius * radius;
}

// Calculate the circumference of the circle
double Circle::circumference() const {
    return 2 * M_PI * radius;
}

// Check if a point is inside the circle
bool Circle::contains(const Point& p) const {
    double distance = center.distanceTo(p);
    return distance <= radius;
}

// Overload the << operator for easy output of circle info
std::ostream& operator<<(std::ostream& os, const Circle& c) {
    os << "Circle: Center = " << c.center << ", Radius = " << c.radius;
    return os;
}
