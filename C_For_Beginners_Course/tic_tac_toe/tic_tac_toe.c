#include <stdio.h>
#include <stdlib.h>

void renderBoard() {

    system("clear");

    printf("\n\tTic Tac Toe\t\n");

    printf("\nPlayer 1 (X) - Player 2 (O)\n\n");

    printf("   |   |   \n");
    printf(" 1 | 2 | 3 \n");
    printf("___|___|___\n");
    printf("   |   |   \n");
    printf(" 4 | 5 | 6 \n");
    printf("___|___|___\n");
    printf("   |   |   \n");
    printf(" 7 | 8 | 9 \n");
    printf("   |   |   \n\n");
}



int main()
{
    renderBoard();
    return 0;
}
