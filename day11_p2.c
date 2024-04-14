//write a program to read 10 sets of p,r,n&q and corresponding as
//Compound interest calculation

#include<stdio.h>
#include<math.h>

int main()
{
float q,r,n,p,a;
int i;
for(i=1;i<=10;i++)
{
printf("Enter the principal amount\n");
scanf("%f\n",&p);
printf("Enter the rate of interest\n");
scanf("%f\n",&r);
printf("Enter the number of amount\n");
scanf("%f\n",&n);
printf("Enter the compounding  period\n");
scanf("%f\n",&q);

a=p+pow(1+(r/q),(n*q));
printf("\n\nTotal amount=%f\n",a);
}
return 0;
}
