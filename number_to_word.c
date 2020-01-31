#include <stdio.h>

/*
** Prints the English word of a number 
*/

int main(void)
{
    int num, digit1, digit2;

    printf("Enter a number from 0-99: ");
    scanf("%d", &num);
    
    digit1 = num / 10;
    digit2 = num % 10;

    printf("The number is ");

    if (num > 9 && num < 20) {
        switch(num){
            case 11:
                printf("Eleven");
                break;
            case 12:
                printf("Twelve");
                break;
            case 13:
                printf("Thirteen");
                break;
            case 14:
                printf("Fourteen");
                break;
            case 15:
                printf("Fifteen");
                break;
            case 16:
                printf("Sixteen");
                break;
            case 17:
                printf("Seventeen");
                break;
            case 18:
                printf("Eighteen");
                break;
            case 19:
                printf("Nineteen");
                break;
            default :
                printf("Error");
        }
    } else {
        if (digit1 != 0) {
            switch(digit1){
                case 2:
                    printf("Twenty");
                    break;
                case 3:
                    printf("Thirty");
                    break;
                case 4:
                    printf("Forty");
                    break;
                case 5:
                    printf("Fifty");
                    break;
                case 6:
                    printf("Sixty");
                    break;
                case 7:
                    printf("Seventy");
                    break;
                case 8:
                    printf("Eighty");
                    break;
                case 9:
                    printf("Ninety");
                    break;
                default :
                    printf("Error");
            }
        }
        if (digit2 != 0) {
            printf(" ");
        }

        switch(digit2) {
            case 1:
                printf("One");
                break;
            case 2:
                printf("Two");
                break;
            case 3:
                printf("Three");
                break;
            case 4:
                printf("Four");
                break;
            case 5:
                printf("Five");
                break;
            case 6:
                printf("Six");
                break;
            case 7:
                printf("Seven");
                break;
            case 8:
                printf("Eigth");
                break;
            case 9:
                printf("Nine");
                break;
            default :
                printf("");
        }
        
    }
    printf("\n");

    return 0;
}
