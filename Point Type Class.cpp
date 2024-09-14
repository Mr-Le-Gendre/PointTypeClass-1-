#include <iostream>
#include "Point.h"
#include "CircleType.h"

int main() {
    // Create two points: center and a point on the circumference
    Point center(0, 0);
    Point circumferencePoint(3, 4);

    // Create a circle using the center and circumference point
    CircleType circle(center, circumferencePoint);

    // Display the circle properties
    circle.print();

    return 0;
}
