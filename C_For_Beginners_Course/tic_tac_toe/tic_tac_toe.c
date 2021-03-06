#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void renderBoard( char arr[10]) {

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

void markBoard ( char arr[], int choice, char xOrO) {
    arr[choice] = xOrO; 
}

bool checkForWin( char arr[10] ) {

    bool threeInARow = 0;

    //check rows
    
    if (arr[0] == arr[1] && arr[0] == arr[2])
        threeInARow = 1;

    if (arr[3] == arr[4] && arr[3] == arr[5])
        threeInARow = 1;

    if (arr[6] == arr[7] && arr[6] == arr[8])
        threeInARow = 1;
    
    //check columns

    if (arr[0] == arr[3] && arr[0] == arr[6])
        threeInARow = 1;

    if (arr[1] == arr[4] && arr[1] == arr[7])
        threeInARow = 1;

    if (arr[2] == arr[5] && arr[2] == arr[8])
        threeInARow = 1;

    //check diagonals

    if (arr[0] == arr[4] && arr[0] == arr[8])
        threeInARow = 1;

    if (arr[2] == arr[4] && arr[2] == arr[6])
        threeInARow = 1;

    return threeInARow;
}

int main()
{
    int choice;
    int currentPlayer = 1;
    char gameState[10] = "123456789";

    renderBoard(gameState);

    while (!checkForWin(gameState)) {
        
        printf("Player %d, Pick a square:", currentPlayer);
        scanf("%d", &choice);

        markBoard(gameState, choice - 1, currentPlayer == 1 ? 'X': 'O');

        currentPlayer = currentPlayer == 1 ? 2 : 1; 


        renderBoard(gameState);
    }

    currentPlayer = currentPlayer == 1 ? 2 : 1; 

    printf("Player %d is the Winner\n\n", currentPlayer);

    return 0;
}
