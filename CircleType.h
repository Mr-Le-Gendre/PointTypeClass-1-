#ifndef CIRCLE_TYPE_H
#define CIRCLE_TYPE_H

#include "Point.h"
#include <iostream>
#include <cmath>

class CircleType {
protected:
    Point center;              // Center of the circle
    Point circumferencePoint;  // Point on the circumference

public:
    // Constructors
    CircleType();  // Default constructor
    CircleType(const Point& centerPoint, const Point& circumferencePoint);  // Parameterized constructor

    // Getter methods
    Point getCenter() const;
    Point getCircumferencePoint() const;

    // Setter methods
    void setCenter(const Point& centerPoint);
    void setCircumferencePoint(const Point& circumferencePoint);

    // Calculate and return the radius of the circle
    double radius() const;

    // Calculate and return the circumference of the circle
    double circumference() const;

    // Calculate and return the area of the circle
    double area() const;

    // Print function to display radius, area, and circumference
    virtual void print() const;
};

#endif // CIRCLE_TYPE_H
