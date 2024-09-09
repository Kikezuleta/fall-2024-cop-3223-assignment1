#include <stdio.h>
#include <math.h>

#define PI 3.14159

// Function prototypes
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
double askForUserInput();

int main(void) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}

double calculateDistance() {
    double x1, y1, x2, y2;
    printf("Enter coordinates for Point #1 (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter coordinates for Point #2 (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);
    
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The distance between the two points is %.2f\n", distance);
    
    return distance;
}

double calculatePerimeter() {
    double distance = calculateDistance(); // Using distance as both width and height for simplicity
    double perimeter = 2 * distance; // If assuming a square (for simplicity)
    
    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);
    return 2.0; // Difficulty rating (example)
}

double calculateArea() {
    double distance = calculateDistance(); // Using distance as both width and height for simplicity
    double area = pow(distance, 2); // Assuming a square
    
    printf("The area of the city encompassed by your request is %.2f\n", area);
    return 2.0; // Difficulty rating (example)
}

double calculateWidth() {
    double x1, y1, x2, y2;
    printf("Enter coordinates for Point #1 (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter coordinates for Point #2 (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);
    
    double width = fabs(x2 - x1); // Calculate width based on x-coordinates
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The width of the city encompassed by your request is %.2f\n", width);
    
    return 3.0; // Difficulty rating (example)
}

double calculateHeight() {
    double x1, y1, x2, y2;
    printf("Enter coordinates for Point #1 (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter coordinates for Point #2 (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);
    
    double height = fabs(y2 - y1); // Calculate height based on y-coordinates
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The height of the city encompassed by your request is %.2f\n", height);
    
    return 3.0; // Difficulty rating (example)
}

double askForUserInput() {
    double value;
    printf("Enter a value: ");
    scanf("%lf", &value);
    return value;
}
