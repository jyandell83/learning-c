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

double findAbsValue (double value) {
    return value >= 0 ? value : value * -1;
}

/*
float findSqRoot (float num) {
}
*/
int main()
{
    printf("GCD of 8 and 12 is %d\n", findGCD(8, 12));
    printf("GCD of 24 and 36 is %d\n", findGCD(24, 36));

    
    printf("The absolute value of 0 is %lf\n", findAbsValue(0.0));
    printf("The absolute value of 10.2403 is %lf\n", findAbsValue(10.2403));
    printf("The absolute value of -2000.034 is %lf\n", findAbsValue(-2000.034));
    printf("The absolute value of -100 is %lf\n", findAbsValue(-100));

    return 0;
}
