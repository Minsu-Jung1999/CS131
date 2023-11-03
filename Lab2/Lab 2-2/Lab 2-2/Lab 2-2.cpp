
#include <stdio.h>

 int main(void)
 {
	 double dist_in_miles, dist_in_kms;

	 printf("Convert miles to kilometers\n");

	 printf("Please enter the distance in miles: ");
	 scanf("%lf", &dist_in_miles);


	 dist_in_kms = 1.609 * dist_in_miles;
	 printf("The distance in kilometers is: ");
	 printf("%f", dist_in_kms);

	 return (0);
 }