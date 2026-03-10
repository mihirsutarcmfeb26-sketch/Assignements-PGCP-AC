#include <iostream>
#include <iomanip>
using namespace std;
const float PI = 3.14159f;

float circleArea(float radius) {
    return PI * radius * radius;
}

float circlePerimeter(float radius) {
    return 2 * PI * radius;
}

int main() {
    float radius = 7.0f;
    //PI = 3.0f;                  

    float area = circleArea(radius);
    float perimeter = circlePerimeter(radius);

    cout << fixed << setprecision(4);
    cout << "Radius: " << radius << endl;
    cout << "Circle Area: " << area << endl;
    cout << "Circle Perimeter: " << perimeter << endl;
    return 0;
}
//output:
//Radius: 7.0000
//Circle Area: 153.9379
//Circle Perimeter: 43.9823