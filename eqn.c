#include<stdio.h>
void main()
{
int a1,b1,c1,a2,b2,c2,a3,b3,c3;
float x,y;
printf("Enter the x,y and z coefficients for Eqn 1:");
scanf("%d%d%d",&a1,&b1,&c1);
printf("Enter the x,y and z coefficients for Eqn 2:");
scanf("%d%d%d",&a2,&b2,c2);
printf("The entered equaions are:"\n);
printf("%dx+%dy=%d\n",a1,b1,c1);
printf("%dx+%dy=%d\n",a2,b2,c2);
int coef1=a1;
int coef2=a2;


printf("On solving the eqns we get,\nx=%f\ny=%f",x,y);
