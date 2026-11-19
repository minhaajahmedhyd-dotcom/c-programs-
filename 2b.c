#include <stdio.h>
void main ()
{
int a[5],i,sum=0;
printf("enter 5 array element\n");
for (i=0;i<5;i++)
{
scanf("%d",&a[i]);
sum += a[i];
}
printf("%d",sum);
}
