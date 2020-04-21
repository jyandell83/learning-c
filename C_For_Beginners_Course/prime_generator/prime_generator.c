/*
 * Generates all prime numbers from 0 - 100
 */

#include <stdio.h>
#include <stdbool.h>

#define MAX 100

int main()
{
    int p, i;
    int primeArray[50] = { 2, 3 };
    int primeIndex = 2;
    bool isPrime;
    
    for (p = 5; p <= MAX; p += 2) {
        isPrime = true;
        
        for (i = 1; isPrime && p / primeArray[i] >= primeArray[i]; ++i) 
            if (p % primeArray[i] == 0)
                isPrime = false;
            
        if (isPrime) {
            primeArray[primeIndex] = p;
            ++primeIndex;
        }
        
    }

    for (i = 0; i < primeIndex; i++) {
        printf("%2d ", primeArray[i]);

        if ((i + 1) % 5 == 0)
            printf("\n");
    }

    printf("\n");

    return 0;
}
