/*
** Computes the volume of a sphere with user input of radius
*/

#include <stdio.h>
#define PI 3.14159f

int main(void)
{
	float radius, volume;

	printf("Enter the radius of the sphere in meters: ");
	scanf("%f", &radius);

	volume = (4.0f / 3.0f) * PI * (radius * radius * radius);

	printf("The volume of the sphere is %f square meters\n", volume);
}
