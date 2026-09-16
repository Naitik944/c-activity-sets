//2. Write a C program to add two numbers.
#include <stdio.h>
int main()  {
int num1,num2,sum;
printf("Enter your first number:");
scanf("%d",&num1);
printf("Enter your second number:");
scanf("%d",&num2);
sum=num1+num2;
printf("The sum of %d and %d is: %d",num1,num2,sum);
return 0;   
}
