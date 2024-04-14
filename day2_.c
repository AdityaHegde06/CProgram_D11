//WRITE A PROGRAMM TO PRINT MULTIPLCATION TABLE OF THE NUMBER

#include <stdio.h>
int main()
{
int i ,num;
printf("\nEnter the number:");
scanf("%d",&num);
//using for loop to creating pattern
for(i=1;i<=10;i++)
{
printf("%d*%d=%d\n",num,i,num*i);
}
return 0;
}
