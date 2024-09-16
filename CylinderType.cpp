#include "CylinderType.h"
#include <iostream>
#include <cmath>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

// Default constructor
CylinderType::CylinderType() : CircleType(), height(1) {}

// Parameterized constructor
CylinderType::CylinderType(const Point& centerPoint, const Point& circumferencePoint, double h)
    : CircleType(centerPoint, circumferencePoint), height(h) {}

// Setter and getter for height
void CylinderType::setHeight(double h) {
    height = h;
}

double CylinderType::getHeight() const {
    return height;
}

// Calculate the volume of the cylinder (base area * height)
double CylinderType::volume() const {
    return area() * height;
}

// Calculate the surface area of the cylinder (2 * base area + side surface area)
double CylinderType::surfaceArea() const {
    return 2 * area() + circumference() * height;
}

// Print function to display all properties of the cylinder
void CylinderType::print() const {
    std::cout << "Cylinder Base Properties:\n";
    CircleType::print();  // Print base properties from CircleType
    std::cout << "Height: " << height << std::endl;
    std::cout << "Surface Area: " << surfaceArea() << std::endl;
    std::cout << "Volume: " << volume() << std::endl;
}
