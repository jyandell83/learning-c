#include <stdio.h>

void swap(int array[10], int firstIndex, int secondIndex){
    int temp = array[firstIndex];
    array[firstIndex] = array[secondIndex];
    array[secondIndex] = temp;
}

int main()
{
    int testArray[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int i = 0;

    while (testArray[i] != '\0') {
        printf("%d\n", testArray[i]);
        i++;
    }

    return 0;
}
