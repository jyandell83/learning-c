#include <stdio.h>

int main()
{
    int primes[25] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

    int min = 0, max = 24;

    int inputNumber;

    printf("Enter a number between 0 and 100 to determine if it is prime:");

    scanf("%d", &inputNumber);

    for (int i = 0; i < 25; i++) {
        printf("%d\n", primes[i]);


        if (inputNumber == primes[i]) {
            printf("success\n");
            break;
        }
    }



    return 0;
}
