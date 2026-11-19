#include <stdio.h>                     // Include standard input-output library for printf and scanf

int main() {                           // Main function where program execution starts
    int limit, n, i;                   // Declare variables: limit (max number), n (current number), i (divisor)

    printf("Enter limit: ");           // Ask the user to enter the maximum limit
    scanf("%d", &limit);               // Read and store the user's input into 'limit'

    for (n = 2; n <= limit; n++) {     // Outer loop: check every number from 2 up to the limit
        for (i = 2; i < n && n % i != 0; i++); // Inner loop: find a divisor; stops when a divisor is found or i reaches n
        if (n == i) printf("%d ", n);  // Condition: if n equals i, it means no divisors were found, so it's a prime number
    }                                  // End of outer loop

    return 0;                          // Indicate successful program termination
}                                      // End of main function