#include <stdio.h>
#include <stdbool.h>
#include "lab-4-2.h"
#include "lab-4-3.h"
bool is_triangle_valid(double a, double b, double c) {
    return (a > 0 && b > 0 && c > 0) &&
           (a + b > c) &&
           (a + c > b) &&
           (b + c > a);
int main(){
	
	double a,b,c;
	
	printf("Enter the lenghts of the sides of triangle:\n");
	printf("Side a:\n ");
	scanf("%lf", &a);
	printf("Side b:\n ");
	scanf("%lf", &b);
	printf("Side c:\n ");
	scanf("%lf", &c);
	
	if (!is_triangle_valid(a,b,c)){
		printf("\nDon't exist\n'");
		return 1;
	}
	
    double perimeter = calculate_perimeter(a,b,c);
    double area = calculate_area(a,b,c);

    printf("\nPerimeter: %.2lf\n", perimeter);
    printf("Area: %.2lf\n", area);

    return 0;
}
}
