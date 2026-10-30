#include <stdio.h>

#define MYPI 3.14159

int main(void)
{
    float radius, area, circumference;

    // Prompt the user for the circle's radius
    printf("Please enter the radius of the circle in cm:\n");
    scanf("%f", &radius);

    // Calculate the area and circumference of the circle
    area = MYPI * radius * radius;
    circumference = MYPI * (radius * 2);

    // Display the circle's dimensions
    printf("\nCircle's Dimensions\n");
    printf("------------------------------------\n");
    printf("\n%-13s: %6.2f cm", "Radius", radius);
    printf("\n%-13s: %6.2f cm^2", "Area", area);

    // Display the circle's dimensions
    printf("\nCircle's Dimensions\n");
    printf("------------------------------------\n");
    printf("\n%-13s: %6.2f cm", "Radius", radius);
    printf("\n%-13s: %6.2f cm^2", "Area", area);
    printf("\n%-13s: %6.2f cm", "Circumference", circumference);
    printf("\n------------------------------------\n");

    return 0;
}
