#include <stdio.h>








unsigned int findGCD (unsigned int num1, unsigned int num2) {
   unsigned int result = 1;
   unsigned int least = num1 > num2 ? num2 : num1;

   for (int i = 2; i <= least; ++i) {
        if (num1 % i == 0 && num2 % i == 0)
            result = i;
   }

   return result;
}

/*
float findAbsValue (float value) {
}

float findSqRoot (float num) {
}
*/
int main()
{
    printf("GCD of 8 and 12 is %d\n", findGCD(8, 12));
    printf("GCD of 24 and 36 is %d\n", findGCD(24, 36));

    return 0;
}
