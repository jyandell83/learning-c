#include <stdio.h>

void swap(int array[11], int firstIndex, int secondIndex){
    int temp = array[firstIndex];
    array[firstIndex] = array[secondIndex];
    array[secondIndex] = temp;
}

int indexOfMinimum(int array[11], int startIndex) {
    int minValue = array[startIndex];
    int minIndex = startIndex;

    for (int i = minIndex + 1; array[i] != '\0'; ++i) {
        if (array[i] < minValue) {
            minIndex = i;
            minValue = array[i];
        }
    }   

    return minIndex;
}

void selectionSort(int array[11]) {

    int index;

    for (int i = 0; array[i] != '\0'; ++i) {
        index = indexOfMinimum(array, i);
        swap(array, i, index);
    }

}

int main()
{
    int testArray[11] = {121, 2, 33, 554, 5, 76, 7, 78, 9, 10};

    selectionSort(testArray);

    int i = 0, j = 0;

    while (testArray[i] != '\0') {
        printf("%d\n", testArray[i]);
        i++;
    }

    /*
    swap(testArray, 2, 5);

    printf("%d-------should be 1\n", indexOfMinimum(testArray, 0));

    while (testArray[j] != '\0') {
        printf("%d\n", testArray[j]);
        j++;
    }
    */

    return 0;
}
