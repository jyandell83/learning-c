#include <stdio.h>
#include <stdbool.h>

int main()
{
    int primes[25] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

    int min = 0, max = 24;

    int inputNumber, guess;

    bool isInputPrime = false;

    printf("Enter a number between 0 and 100 to determine if it is prime:");

    scanf("%d", &inputNumber);

    while (min <= max) {

        guess = (min + max) / 2;
        
        printf("%d is the guess\n", primes[guess]);
        if (inputNumber == primes[guess]) {
            isInputPrime = true;
            break;
        } else if (inputNumber > primes[guess]){
            min = guess + 1; 
        } else {
            max = guess - 1;
        }
    }

    
    isInputPrime ? printf("%d is indeed prime\n", inputNumber) : printf("%d is not prime\n", inputNumber);

    /*
    for (int i = 0; i < 25; i++) {
        printf("%d\n", primes[i]);


        if (inputNumber == primes[i]) {
            printf("success\n");
            break;
        }
    }
    */



    return 0;
}
