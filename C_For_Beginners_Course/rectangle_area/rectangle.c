/*
 * Prints the Area and Perimeter of a Rectangle
 */
#include <stdio.h>

int main()
{
    double width, height, area, perimeter;

    printf("Enter the height of the Rectangle in feet: ");
    scanf("%lf", &height);
    printf("Enter the width of the Rectangle in feet: ");
    scanf("%lf", &width);

    area = height * width;
    perimeter = (height + width) * 2;

    printf("The area is %lf square feet and the perimeter is %lf feet\n", area, perimeter);

    return 0;
}
