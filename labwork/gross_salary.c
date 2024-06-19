#include <stdio.h>
#include<conio.h>

int main() {
    float base_salary, gross_salary;
    float hra_percent, da_percent, ta_percent;
    
    printf("Enter the base salary: ");
    scanf("%f", &base_salary);
    
    printf("Enter percentage of HRA: ");
    scanf("%f", &hra_percent);
    
    printf("Enter percentage of DA: ");
    scanf("%f", &da_percent);
    
    printf("Enter percentage of TA: ");
    scanf("%f", &ta_percent);
    
    
    float hra_amount = base_salary * (hra_percent / 100);
    float da_amount = base_salary * (da_percent / 100);
    float ta_amount = base_salary * (ta_percent / 100);
    
 
    gross_salary = base_salary + hra_amount + da_amount + ta_amount;
    
    printf("\nBase Salary: %.2f\n", base_salary);
    printf("HRA: %.2f\n", hra_amount);
    printf("DA: %.2f\n", da_amount);
    printf("TA: %.2f\n", ta_amount);
    printf("------------------------------------\n");
    printf("Gross Salary: %.2f\n", gross_salary);
    
    return 0;
}

