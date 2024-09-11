#include <iostream>
#include "Point.h"
#include "Circle.h"

int main() {
    // Create two points
    Point p1(0, 0);  // A point at the origin
    Point p2(3, 4);  // A point at coordinates (3, 4)

    // Output the details of the points
    std::cout << "Point 1: " << p1 << std::endl;
    std::cout << "Point 2: " << p2 << std::endl;

    // Calculate the distance between the two points
    double distance = p1.distanceTo(p2);
    std::cout << "Distance between Point 1 and Point 2: " << distance << std::endl;

    // Create a circle with center at p1 and radius 5
    Circle circle1(p1, 5);
    std::cout << circle1 << std::endl;

    // Calculate and display the area and circumference of the circle
    std::cout << "Area of circle: " << circle1.area() << std::endl;
    std::cout << "Circumference of circle: " << circle1.circumference() << std::endl;

    // Check if p2 is inside the circle
    if (circle1.contains(p2)) {
        std::cout << "Point 2 is inside the circle." << std::endl;
    }
    else {
        std::cout << "Point 2 is outside the circle." << std::endl;
    }

    return 0;
}
