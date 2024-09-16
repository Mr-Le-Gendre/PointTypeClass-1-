#include <iostream>
#include "Point.h"
#include "CylinderType.h"

int main() {
    // Create points for the base of the cylinder
    Point center(0, 0);
    Point circumferencePoint(3, 4);

    // Create a cylinder
    CylinderType cylinder(center, circumferencePoint, 10);

    // Display the cylinder's properties
    cylinder.print();

    return 0;
}
