#include <stdio.h>
#include "triangle.h"

int main() {
    double a, b, c;
    
    printf("Enter the lenght of the sides of triangle:\n");
    printf("a = ");
    scanf("%lf", &a);
    printf("b = ");
    scanf("%lf", &b);
    printf("c = ");
    scanf("%lf", &c);
    
    if (check_triangle(a, b, c)) {
        printf("\n????????: %.2lf\n", perimeter(a, b, c));
        printf("???????: %.2lf\n", area(a, b, c));
    } else {
        printf("\n??????????? ? ?????? ????????? ?? ??????????!\n");
    }
    
    return 0;
}
