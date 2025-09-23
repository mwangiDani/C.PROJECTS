#include <stdio.h>
#include <math.h>

int main() {
    double radius, height, volume, surfacearea;
    

    // Prompt user for input
    printf("Enter the radius of the cylinder: ");
    scanf("%lf", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%lf", &height);

    // Calculate volume and surface area
    volume = M_PI * radius * radius * height;
    surfacearea = 2 * M_PI * radius * radius + 2 * M_PI * radius * height;

    // Display results
 
    printf("Volume       = %.2lf cubic units\n", volume);
    printf("Surface Area = %.2lf square units\n", surfacearea);

    return 0;
}
