#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <cmath>

class Point {
private:
    double x;  // X-coordinate
    double y;  // Y-coordinate

public:
    // Constructors
    Point();               // Default constructor
    Point(double xVal, double yVal);  // Parameterized constructor

    // Getter methods
    double getX() const;
    double getY() const;

    // Setter methods
    void setX(double xVal);
    void setY(double yVal);

    // Calculate the distance between two points
    double distanceTo(const Point& otherPoint) const;

    // Overload the << operator for easy output of point coordinates
    friend std::ostream& operator<<(std::ostream& os, const Point& p);
};

#endif // POINT_H

