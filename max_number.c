#include <stdio.h>
#include <stdlib.h>

/*
** Returns the larger value of two integers. Groundbreaking stuff...
*/

int max(int num1, int num2) {
    int result;
    if (num1 > num2) {
         result = num1;
    } else {
        result = num2;
    }
    return result;
}

int main() {
    printf("%d\n", max(40, 50));
}