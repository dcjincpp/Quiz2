//Tic Tac Toe game between 2 players or player vs computer
#include <stdio.h>
#include <stdbool.h>

int main(){
    int input;
    bool win = false;

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
    printf("\n");

    // repeat until win or tie
    char player1[9];
    char player2[9];
    int row, column;

    scanf("%d %d", &row, &column);
    
    switch(row)
    {
        case 1:
            switch(column)
            {
                case 1:
                    player1[0] = 'O';
                    break;

                case 2:
                    player1[1] = 'O';
                    break;

                case 3:
                    player1[2] = 'O';
                    break;

                default:
                    printf("Invalid column\n");
            }
            break;

        case 2:
            switch(column)
            {
                case 1:
                    player1[3] = 'O';
                    break;

                case 2:
                    player1[4] = 'O';
                    break;

                case 3:
                    player1[5] = 'O';
                    break;
                    
                default:
                    printf("Invalid column\n");
            }
            break;

        case 3:
            switch(column)
            {
                case 1:
                    player1[6] = 'O';
                    break;

                case 2:
                    player1[7] = 'O';
                    break;

                case 3:
                    player1[8] = 'O';
                    break;
                    
                default:
                    printf("Invalid column\n");
            }
            break;

        default:
            printf("Invalid row\n");
    }

    printf("The current status is:\n");
    printf("\n");
    printf("+-----------+\n");
    printf("|%c |%c| %c |\n", player1[0], player1[1], player1[2]);
    printf("+-----------+\n");
    printf("|%c |%c |%c |\n", player1[3], player1[4], player1[5]);
    printf("+-----------+\n");
    printf("|%c |%c |%c |\n", player1[6], player1[7], player1[8]);
    printf("+-----------+\n");

    while(!win)
    {
        //Player 1 win condition
        if(player1[1]==player1[2]==player1[3])
        {
            win = true;
            printf("Player 1 wins!");
        } else if (player1[4]==player1[5]==player1[6])
        {
            win = true;
            printf("Player 1 wins!");
        } else if (player1[7]==player1[8]==player1[9])
        {
            win = true;
            printf("Player 1 wins!");
        } else if (player1[1]==player1[4]==player1[7])
        {
            win = true;
            printf("Player 1 wins!");
        } else if (player1[2]==player1[5]==player1[8])
        {
            win = true;
            printf("Player 1 wins!");
        } else if (player1[3]==player1[6]==player1[9])
        {
            win = true;
            printf("Player 1 wins!");
        } else if (player1[3]==player1[5]==player1[7])
        {
            win = true;
            printf("Player 1 wins!");
        } else if (player1[1]==player1[5]==player1[9])
        {
            win = true;
            printf("Player 1 wins!");
        }

        //Player 2 win condition
        if(player2[1]==player2[2]==player2[3])
        {
            win = true;
            printf("Player 1 wins!");
        } else if (player1[4]==player1[5]==player1[6])
        {
            win = true;
            printf("Player 1 wins!");
        } else if (player1[7]==player1[8]==player1[9])
        {
            win = true;
            printf("Player 1 wins!");
        } else if (player1[1]==player1[4]==player1[7])
        {
            win = true;
            printf("Player 1 wins!");
        } else if (player1[2]==player1[5]==player1[8])
        {
            win = true;
            printf("Player 1 wins!");
        } else if (player1[3]==player1[6]==player1[9])
        {
            win = true;
            printf("Player 1 wins!");
        } else if (player1[3]==player1[5]==player1[7])
        {
            win = true;
            printf("Player 1 wins!");
        } else if (player1[1]==player1[5]==player1[9])
        {
            win = true;
            printf("Player 1 wins!");
        }


    }

    //prompt user to make their move by typing
//





    return 0;
}