#ifndef CYLINDER_TYPE_H
#define CYLINDER_TYPE_H

#include "CircleType.h"

class CylinderType : public CircleType {
private:
    double height;

public:
    // Constructors
    CylinderType();  // Default constructor
    CylinderType(const Point& centerPoint, const Point& circumferencePoint, double h);  // Parameterized constructor

    // Getter and setter for height
    void setHeight(double h);
    double getHeight() const;

    // Calculate volume and surface area
    double volume() const;
    double surfaceArea() const;

    // Print function to display cylinder and base properties
    void print() const override;
};

#endif // CYLINDER_TYPE_H
