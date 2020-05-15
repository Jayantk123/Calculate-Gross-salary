#include<stdio.h>
#include<conio.h>

void main()
{
int basic;
float gross_salary,da,ta;
clrscr();

printf("Enter basic salary\n");
scanf("%d",&basic);

da=(10*basic)/100;
ta=(12*basic)/100;

gross_salary= basic+da+ta;

printf("Gross Salary is: %f",gross_salary);

getch();
}