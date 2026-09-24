#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NAME 20
//function prototypes
void logo();
void play();
void randomDice();
void randomCard();
int rollDie();

//main functions
int main() {
   //seed the random generator using current time using null
    srand((unsigned int)time(NULL));

    //call function logo
    logo();
    //call function play
    play();

    //clear input buffer before pausing the sccreen
    while ((getchar()) != '\n');

    //pause the screen press enter to continue
    printf("Press Enter to continue...");
    getchar();

    //ends the sequence
    return 0;
}

//logo function logo
void logo() {
    printf(".--------------. .--------------. .--------------. .--------------. .--------------. .--------------. .--------------.\n");
    printf("|  _______     | |   ________   | |  _____       | |  _____       | |  _    _      | |    _____     | |  _________   | \n");
    printf("| |_   __ \\    | |  |_   __  |  | | |_   _|      | | |_   _|      | | | |  | |     | |   |_   _|    | | |  _   _  |  | \n");
    printf("|   | |__) |   | |    | |  | |  | |   | |        | |   | |        | | | |__| |_    | |     | |      | | |_/ | | \\_|  | \n");
    printf("|   |  __ /    | |    | |  | |  | |   | |   _    | |   | |   _    | | |____   _|   | |     | |      | |     | |      | \n");
    printf("|  _| |  \\ \\_  | |   _| |__| |  | |  _| |__/ |   | |  _| |__/ |   | |     _| |_    | |    _| |_     | |    _| |_     | \n");
    printf("| |____| |___| | |  |________|  | | |________|   | | |________|   | |    |_____|   | |   |_____|    | |   |_____|    | \n");
    printf("'--------------' '--------------' '--------------' '--------------' '--------------' '--------------' '--------------'\n\n");
}
//function play
void play() {
    char player[NAME];
    printf("Enter player name: ");
    scanf("%19s", player);
    printf("\nWelcome, %s!\n\n", player);

    //call function randomCard three times to create 3 playing cards
    randomCard();
    randomCard();
    randomCard();

    //Call function randomDice to roll the players 6 dice
    randomDice();
}

//call function rancomDice
void randomCard() {
    int val1 = rollDie();
    int val2 = rollDie();
    int val3 = rollDie();
    int val4 = rollDie();

    printf(".-----------------.\n");
    printf("| .-----. .-----. |\n");
    printf("| |  %d  | |  %d  | |\n", val1, val2);
    printf("| '-----' '-----' |\n");
    printf("| .-----. .-----. |\n");
    printf("| |  %d  | |  %d  | |\n", val3, val4);
    printf("| '-----' '-----' |\n");
    printf("'-----------------'\n\n");    
}



//logo function converted to randomDice
//function randomDice
void randomDice() {
    int d1 = rollDie();
    int d2 = rollDie();
    int d3 = rollDie();
    int d4 = rollDie();
    int d5 = rollDie();
    int d6 = rollDie();

    printf(".-------. .-------. .-------. .-------. .-------. .-------.\n");
    printf("|   %d   | |   %d   | |   %d   | |   %d   | |   %d   | |   %d   |\n", d1, d2, d3, d4, d5, d6);
    printf("'-------' '-------' '-------' '-------' '-------' '-------'\n\n");
}

//function to rollDice
int rollDie() {
    return (rand() % 6)+1;
}
