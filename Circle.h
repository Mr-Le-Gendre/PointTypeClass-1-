#ifndef CIRCLE_H
#define CIRCLE_H

#include "Point.h"
#include <iostream>
#include <cmath>

// Define Pi manually if M_PI is not available
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

class Circle {
private:
    Point center;  // Center of the circle
    double radius;  // Radius of the circle

public:
    // Constructors
    Circle();  // Default constructor
    Circle(const Point& centerPoint, double r);  // Parameterized constructor

    // Getter methods
    Point getCenter() const;
    double getRadius() const;

    // Setter methods
    void setCenter(const Point& centerPoint);
    void setRadius(double r);

    // Calculate the area of the circle
    double area() const;

    // Calculate the circumference of the circle
    double circumference() const;

    // Check if a point is inside the circle
    bool contains(const Point& p) const;

    // Overload the << operator for easy output of circle info
    friend std::ostream& operator<<(std::ostream& os, const Circle& c);
};

#endif // CIRCLE_H

