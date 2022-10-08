//Tic Tac Toe game between 2 players or player vs computer
#include <stdio.h>
#include <stdbool.h>

int main(){
    int input;
    char player[9] = {'0', '1', '2', '3', '4', '5', '6', '7', '8'};
    int row, column;
    bool win = false;
    bool placed = false;

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
    printf("+-----------+\n");
    printf("| %c | %c | %c |\n", player[0], player[1], player[2]);
    printf("+-----------+\n");
    printf("| %c | %c | %c |\n", player[3], player[4], player[5]);
    printf("+-----------+\n");
    printf("| %c | %c | %c |\n", player[6], player[7], player[8]);
    printf("+-----------+\n");
    printf("\n");

    //Prompt players to make their move and show their moves repeat until win or tie
    while(!win)
    {////////////////////////////////////////////////////////////////////////////////////////////////player1
        printf("player1: make your move\n");
        printf("\n");
        scanf("%d %d", &row, &column);
        printf("\n");
        while(!placed)
        {
            switch(row)
            {
                case 1:
                    switch(column)
                    {
                        case 1:
                            if((player[0] == 'O') || (player[0] == 'X'))
                            {
                                printf("can not place there\n");
                                printf("Try again\n");
                                scanf("%d %d", &row, &column);
                            } else {
                                player[0] = 'O';
                                placed = true;
                            }
                            break;

                        case 2:
                            if((player[1] == 'O') || (player[1] == 'X'))
                            {
                                printf("can not place there\n");
                                printf("Try again\n");
                                scanf("%d %d", &row, &column);
                            } else {
                                player[1] = 'O';
                                placed = true;
                            }
                            break;

                        case 3:
                            if((player[2] == 'O') || (player[2] == 'X'))
                            {
                                printf("can not place there\n");
                                printf("Try again\n");
                                scanf("%d %d", &row, &column);
                            } else {
                                player[2] = 'O';
                                placed = true;
                            }
                            break;

                        default:
                            printf("Try again\n");
                            scanf("%d %d", &row, &column);
                    }
                break;

                case 2:
                    switch(column)
                    {
                        case 1:
                            if((player[3] == 'O') || (player[3] == 'X'))
                            {
                                printf("can not place there\n");
                                printf("Try again\n");
                                scanf("%d %d", &row, &column);
                            } else {
                                player[3] = 'O';
                                placed = true;
                            }
                            break;

                        case 2:
                            if((player[4] == 'O') || (player[4] == 'X'))
                            {
                                printf("can not place there\n");
                                printf("Try again\n");
                                scanf("%d %d", &row, &column);
                            } else {
                                player[4] = 'O';
                                placed = true;
                            }
                            break;

                        case 3:
                            if((player[5] == 'O') || (player[5] == 'X'))
                            {
                                printf("can not place there\n");
                                printf("Try again\n");
                                scanf("%d %d", &row, &column);
                            } else {
                                player[5] = 'O';
                                placed = true;
                            }
                            break;
                    
                        default:
                            printf("Try again\n");
                            scanf("%d %d", &row, &column);
                    }
                    break;

                case 3:
                    switch(column)
                    {
                        case 1:
                            if((player[6] == 'O') || (player[6] == 'X'))
                            {
                                printf("can not place there\n");
                                printf("Try again\n");
                                scanf("%d %d", &row, &column);
                            } else {
                                player[6] = 'O';
                                placed = true;
                            }
                            break;

                        case 2:
                            if((player[7] == 'O') || (player[7] == 'X'))
                            {
                                printf("can not place there\n");
                                printf("Try again\n");
                                scanf("%d %d", &row, &column);
                            } else {
                                player[7] = 'O';
                                placed = true;
                            }
                            break;

                        case 3:
                            if((player[8] == 'O') || (player[8] == 'X'))
                            {
                                printf("can not place there\n");
                                printf("Try again\n");
                                scanf("%d %d", &row, &column);
                            } else {
                                player[8] = 'O';
                                placed = true;
                            }
                            break;
                    
                        default:
                            printf("Invalid column\n");
                            printf("Try again\n");
                            scanf("%d %d", &row, &column);
                    }
                    break;

                default:
                    printf("Invalid row\n");
                    printf("Try again\n");
                    scanf("%d %d", &row, &column);
            }
        }

        placed = false;
        
        printf("Good!\n");
        printf("\n");
        printf("The current status is:\n");
        printf("\n");
        printf("+-----------+\n");
        printf("| %c | %c | %c |\n", player[0], player[1], player[2]);
        printf("+-----------+\n");
        printf("| %c | %c | %c |\n", player[3], player[4], player[5]);
        printf("+-----------+\n");
        printf("| %c | %c | %c |\n", player[6], player[7], player[8]);
        printf("+-----------+\n");
        printf("\n");

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////Player 1 win condition
        if(player[1]==player[2]==player[3])
        {
            win = true;
            printf("Player 1 wins!");
            break;
        } else if (player[4]==player[5]==player[6])
        {
            win = true;
            printf("Player 1 wins!");
            break;
        } else if (player[7]==player[8]==player[8])
        {
            win = true;
            printf("Player 1 wins!");
            break;
        } else if (player[1]==player[4]==player[7])
        {
            win = true;
            printf("Player 1 wins!");
            break;
        } else if (player[2]==player[5]==player[8])
        {
            win = true;
            printf("Player 1 wins!");
            break;
        } else if (player[3]==player[6]==player[8])
        {
            win = true;
            printf("Player 1 wins!");
            break;
        } else if (player[3]==player[5]==player[7])
        {
            win = true;
            printf("Player 1 wins!");
            break;
        } else if (player[1]==player[5]==player[8])
        {
            win = true;
            printf("Player 1 wins!");
            break;
        }

////////////////////////////////////////////////////////////////////////////////////////////////////////////player2
        printf("player2: make your move\n");
        printf("\n");
        scanf("%d %d", &row, &column);
        while(!placed)
        {

            switch(row)
            {
                case 1:
                    switch(column)
                    {
                        case 1:
                            if((player[0] == 'O') || (player[0] == 'X'))
                                {
                                    printf("can not place there\n");
                                    printf("Try again\n");
                                    scanf("%d %d", &row, &column);
                                } else {
                                    player[0] = 'X';
                                    placed = true;
                                }
                            break;

                        case 2:
                            if((player[1] == 'O') || (player[1] == 'X'))
                                {
                                    printf("can not place there\n");
                                    printf("Try again\n");
                                    scanf("%d %d", &row, &column);
                                } else {
                                    player[1] = 'X';
                                    placed = true;
                                }
                            break;

                        case 3:
                            if((player[2] == 'O') || (player[2] == 'X'))
                                {
                                    printf("can not place there\n");
                                    printf("Try again\n");
                                    scanf("%d %d", &row, &column);
                                } else {
                                    player[2] = 'X';
                                    placed = true;
                                }
                            break;

                        default:
                            printf("Try again\n");
                            scanf("%d %d", &row, &column);
                    }
                    break;

                case 2:
                    switch(column)
                    {
                        case 1:
                            if((player[3] == 'O') || (player[3] == 'X'))
                                {
                                    printf("can not place there\n");
                                    printf("Try again\n");
                                    scanf("%d %d", &row, &column);
                                } else {
                                    player[3] = 'X';
                                    placed = true;
                                }
                            break;

                        case 2:
                            if((player[4] == 'O') || (player[4] == 'X'))
                                {
                                    printf("can not place there\n");
                                    printf("Try again\n");
                                    scanf("%d %d", &row, &column);
                                } else {
                                    player[4] = 'X';
                                    placed = true;
                                }
                            break;

                        case 3:
                            if((player[5] == 'O') || (player[5] == 'X'))
                                {
                                    printf("can not place there\n");
                                    printf("Try again\n");
                                    scanf("%d %d", &row, &column);
                                } else {
                                    player[5] = 'X';
                                    placed = true;
                            }
                            break;
                    
                        default:
                            printf("Invalid column\n");
                            printf("Try again\n");
                            scanf("%d %d", &row, &column);
                    }
                    break;

                case 3:
                    switch(column)
                    {
                        case 1:
                            if((player[6] == 'O') || (player[6] == 'X'))
                                {
                                    printf("can not place there\n");
                                    printf("Try again\n");
                                    scanf("%d %d", &row, &column);
                                } else {
                                    player[6] = 'X';
                                    placed = true;
                                }
                            break;

                        case 2:
                            if((player[7] == 'O') || (player[7] == 'X'))
                                {
                                    printf("can not place there\n");
                                    printf("Try again\n");
                                    scanf("%d %d", &row, &column);
                                } else {
                                    player[7] = 'X';
                                    placed = true;
                                }
                            break;

                        case 3:
                            if((player[8] == 'O') || (player[8] == 'X'))
                                {
                                    printf("can not place there\n");
                                    printf("Try again\n");
                                    scanf("%d %d", &row, &column);
                                } else {
                                    player[8] = 'X';
                                    placed = true;
                                }
                            break;
                    
                        default:
                            printf("Invalid column\n");
                            printf("Try again\n");
                            scanf("%d %d", &row, &column);
                            break;
                    }
                    break;

                default:
                    printf("Invalid row\n");
                    printf("Try again\n");
                    scanf("%d %d", &row, &column);
            }
        }
        placed = false;

        printf("Good!\n");
        printf("\n");
        printf("The current status is:\n");
        printf("\n");
        printf("+-----------+\n");
        printf("| %c | %c | %c |\n", player[0], player[1], player[2]);
        printf("+-----------+\n");
        printf("| %c | %c | %c |\n", player[3], player[4], player[5]);
        printf("+-----------+\n");
        printf("| %c | %c | %c |\n", player[6], player[7], player[8]);
        printf("+-----------+\n");
        printf("\n");

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////Player 2 win condition
        if(player[1]==player[2]==player[3])
        {
            win = true;
            printf("Player 2 wins!");
        } else if (player[4]==player[5]==player[6])
        {
            win = true;
            printf("Player 2 wins!");
        } else if (player[6]==player[7]==player[8])
        {
            win = true;
            printf("Player 2 wins!");
        } else if (player[1]==player[4]==player[7])
        {
            win = true;
            printf("Player 2 wins!");
        } else if (player[2]==player[5]==player[8])
        {
            win = true;
            printf("Player 2 wins!");
        } else if (player[3]==player[6]==player[8])
        {
            win = true;
            printf("Player 2 wins!");
        } else if (player[3]==player[5]==player[7])
        {
            win = true;
            printf("Player 2 wins!");
        } else if (player[1]==player[5]==player[8])
        {
            win = true;
            printf("Player 2 wins!");
        }
    }


    /*while(!win)
    {
        //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////Player 1 win condition
        if(player[1]==player[2]==player[3])
        {
            win = true;
            printf("Player 1 wins!");
        } else if (player[4]==player[5]==player[6])
        {
            win = true;
            printf("Player 1 wins!");
        } else if (player[7]==player[8]==player[9])
        {
            win = true;
            printf("Player 1 wins!");
        } else if (player[1]==player[4]==player[7])
        {
            win = true;
            printf("Player 1 wins!");
        } else if (player[2]==player[5]==player[8])
        {
            win = true;
            printf("Player 1 wins!");
        } else if (player[3]==player[6]==player[9])
        {
            win = true;
            printf("Player 1 wins!");
        } else if (player[3]==player[5]==player[7])
        {
            win = true;
            printf("Player 1 wins!");
        } else if (player[1]==player[5]==player[9])
        {
            win = true;
            printf("Player 1 wins!");
        }

        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////Player 2 win condition
        if(player[1]==player[2]==player[3])
        {
            win = true;
            printf("Player 1 wins!");
        } else if (player[4]==player[5]==player[6])
        {
            win = true;
            printf("Player 1 wins!");
        } else if (player[7]==player[8]==player[9])
        {
            win = true;
            printf("Player 1 wins!");
        } else if (player[1]==player[4]==player[7])
        {
            win = true;
            printf("Player 1 wins!");
        } else if (player[2]==player[5]==player[8])
        {
            win = true;
            printf("Player 1 wins!");
        } else if (player[3]==player[6]==player[9])
        {
            win = true;
            printf("Player 1 wins!");
        } else if (player[3]==player[5]==player[7])
        {
            win = true;
            printf("Player 1 wins!");
        } else if (player[1]==player[5]==player[9])
        {
            win = true;
            printf("Player 1 wins!");
        }


    }*/

    //prompt user to make their move by typing
//





    return 0;
}