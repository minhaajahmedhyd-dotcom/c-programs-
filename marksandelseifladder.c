#include <stdio.h>

int main() {
    int m;
    printf("Enter marks: ");
    scanf("%d", &m);

    if (m >= 90)      puts("EXCELLENT");
    else if (m >= 75) puts("DISTINCTION");
    else if (m >= 60) puts("FIRST CLASS");
    else if (m >= 50) puts("SECOND CLASS");
    else if (m >= 40) puts("PASS");
    else                puts("FAIL");

  return 0;
}