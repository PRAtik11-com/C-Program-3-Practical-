#include<stdio.h>
#include<conio.h>

void main() {
    float ang1, ang2, ang3;

    printf("Enter the first angle: ");
    scanf("%f", &ang1);

    printf("Enter the second angle : ");
    scanf("%f", &ang2);

    ang3 = 180.0 - (ang1 + ang2);

    printf("The third angle of the right triangle is: %.2f degrees\n", ang3);

    getch();
}
