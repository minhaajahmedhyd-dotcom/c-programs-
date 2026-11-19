#include <stdio.h>

void main() {
    int limit, n, i;

    printf("Enter a number: ");
    scanf("%d", &limit);

    for (n = 2; n <= limit; n++) {
        i = 2;
        while (n % i != 0) { i++; }
        
        if (n == i) {
            printf("%d ", n);
        }
    }
}   