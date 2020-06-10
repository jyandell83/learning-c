#include <stdio.h>

void swap(int array[10], int firstIndex, int secondIndex){
    int temp = array[firstIndex];
    array[firstIndex] = array[secondIndex];
    array[secondIndex] = temp;
}

int main()
{
    int testArray[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int i = 0, j = 0;

    while (testArray[i] != '\0') {
        printf("%d\n", testArray[i]);
        i++;
    }

    swap(testArray, 2, 5);

    while (testArray[j] != '\0') {
        printf("%d\n", testArray[j]);
        j++;
    }

    return 0;
}
