//Tic Tac Toe game between 2 players or player vs computer
#include <stdio.h>

int main(){
    int input;

    printf("\n");
    printf("===========================\n");
    printf("\n");
    printf("WELCOME TO TIC TAC TOE!\n");
    printf("\n");

    //prompt user for game they wish to play (player or computer)
    printf("1 --- person vs. person\n");
    printf("\n");
    printf("2 --- person vs. random computer\n");
    printf("\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &input);

    //Check user input

    while(input != 1 && input != 2)
    {
        printf("%d is not a valid input, try again\n", input);
        scanf("%d", &input);
    }


    //read information from console
    printf("\n\n");
    printf("===========================\n");
    printf("\n");
    printf("You have entered choice %d\n", input);
    printf("\n");

    //Initial status of board
    printf("The current status is:\n");
    printf("\n");
    printf("+--------------+\n");
    printf("|    |    |    |\n");
    printf("+--------------+\n");
    printf("|    |    |    |\n");
    printf("+--------------+\n");
    printf("|    |    |    |\n");
    printf("+--------------+\n");

/* repeat until win or tie

    //prompt user to make their move by typing
*/





    return 0;
}