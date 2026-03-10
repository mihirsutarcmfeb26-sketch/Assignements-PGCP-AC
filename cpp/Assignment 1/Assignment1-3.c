#include <stdio.h>
// Function prototypes
float celsiusToFahrenheit(float c);
float fahrenheitToCelsius(float f);

int main() {
    float celsius = 30.0f;
    float fahrenheit = 80.5f;;

    // Call both functions with sample values
    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, celsiusToFahrenheit(celsius));
    printf("%.2f Fahrenheit = %.2f Celsius\n", fahrenheit, fahrenheitToCelsius(fahrenheit));

    return 0;
}

// Function definitions
float celsiusToFahrenheit(float c) {
    return (c * 9.0 / 5.0) + 32.0;
}

float fahrenheitToCelsius(float f) {
    return (f - 32.0) * 5.0 / 9.0;
}
//output:
//30.00 Celsius = 86.00 Fahrenheit
//80.50 Fahrenheit = 26.94 Celsius