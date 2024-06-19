#include<stdio.h>
#include<conio.h>

void main() {
    float cel, fahre;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &cel);

    fahre = (cel * 9/5) + 32;

    printf("The temperature in Fahrenheit: = %.2f Fahrenheit\n",  fahre);

}
