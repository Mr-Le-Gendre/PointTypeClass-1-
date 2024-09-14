#include "CircleType.h"
#include <cmath>  // Include for sqrt and pow

// Define Pi manually if M_PI is not available
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

// Default constructor
CircleType::CircleType() : center(Point(0, 0)), circumferencePoint(Point(1, 0)) {}

// Parameterized constructor
CircleType::CircleType(const Point& centerPoint, const Point& circumferencePoint)
    : center(centerPoint), circumferencePoint(circumferencePoint) {}

// Getter for center
Point CircleType::getCenter() const {
    return center;
}

// Getter for circumference point
Point CircleType::getCircumferencePoint() const {
    return circumferencePoint;
}

// Setter for center
void CircleType::setCenter(const Point& centerPoint) {
    center = centerPoint;
}

// Setter for circumference point
void CircleType::setCircumferencePoint(const Point& circumferencePoint) {
    this->circumferencePoint = circumferencePoint;
}

// Calculate and return the radius of the circle
double CircleType::radius() const {
    return center.distanceTo(circumferencePoint);  // Radius is the distance between center and circumference point
}

// Calculate and return the circumference of the circle
double CircleType::circumference() const {
    return 2 * M_PI * radius();
}

// Calculate and return the area of the circle
double CircleType::area() const {
    return M_PI * std::pow(radius(), 2);
}

// Print function to display radius, area, and circumference
void CircleType::print() const {
    std::cout << "Radius: " << radius() << std::endl;
    std::cout << "Area: " << area() << std::endl;
    std::cout << "Circumference: " << circumference() << std::endl;
}
