#include <stdio.h>
void swap (int x, int y);
void main ()
{
    int x = 10 , y = 20;
    printf("Before swapping: x = %d, y = %d\n", x, y);
    swap(x, y);
    printf("After swapping: x = %d, y = %d\n", x, y);

}
void swap (int x, int y)
{
    int temp;
    temp = x;
    x = y;  
    y = temp;
    printf("Inside swap function: x = %d, y = %d\n", x, y);
}