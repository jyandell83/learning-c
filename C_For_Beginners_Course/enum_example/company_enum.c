/*
 * An example of an enum in C
 */

#include <stdio.h>

int main()
{
    enum company { Google, Facebook, Xerox, Yahoo, Ebay, Microsoft };

    enum company xerox = Xerox;
    enum company google = Google;
    enum company ebay = Ebay;
    printf("%d\n", xerox);
    printf("%d\n", google);
    printf("%d\n", ebay);
    
    return 0;
}
