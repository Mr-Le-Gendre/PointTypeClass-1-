#include "Point.h"

// Default constructor - initializes point at the origin
Point::Point() : x(0), y(0) {}

// Parameterized constructor
Point::Point(double xVal, double yVal) : x(xVal), y(yVal) {}

// Getter for X coordinate
double Point::getX() const {
    return x;
}

// Getter for Y coordinate
double Point::getY() const {
    return y;
}

// Setter for X coordinate
void Point::setX(double xVal) {
    x = xVal;
}

// Setter for Y coordinate
void Point::setY(double yVal) {
    y = yVal;
}

// Calculate the Euclidean distance between two points
double Point::distanceTo(const Point& otherPoint) const {
    double dx = x - otherPoint.getX();
    double dy = y - otherPoint.getY();
    return std::sqrt(dx * dx + dy * dy);
}

// Overload the << operator for easy output of points
std::ostream& operator<<(std::ostream& os, const Point& p) {
    os << "(" << p.x << ", " << p.y << ")";
    return os;
}
