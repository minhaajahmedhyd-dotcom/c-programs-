#include <stdio.h>
int main(void)
{
int a[5], i, m;
for(i = 0; i < 5; i++)
{
scanf("%d", &a[i]);
}
for(m = a[0], i = 1; i < 5; i++)
{
if(a[i] > m)
{
m = a[i];
}
}
printf("%d\\n", m);
return 0;
}+
