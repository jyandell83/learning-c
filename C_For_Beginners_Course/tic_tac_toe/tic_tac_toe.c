#include <stdio.h>
#include <stdlib.h>

void renderBoard( char arr[9]) {

    system("clear");

    printf("\n\tTic Tac Toe\t\n");

    printf("\nPlayer 1 (X) - Player 2 (O)\n\n");

    printf("   |   |   \n");
    printf(" %c | %c | %c \n", arr[0], arr[1], arr[2]);
    printf("___|___|___\n");
    printf("   |   |   \n");
    printf(" %c | %c | %c \n", arr[3], arr[4], arr[5]);
    printf("___|___|___\n");
    printf("   |   |   \n");
    printf(" %c | %c | %c \n", arr[6], arr[7], arr[8]);
    printf("   |   |   \n\n");
}



int main()
{
    char gameState[9] = "123456789";

    renderBoard(gameState);
    return 0;
}
