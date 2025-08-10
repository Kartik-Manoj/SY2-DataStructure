/*write a game development program that implements the Bubble Sort 
algorithm. The program 	will simulate a simple game where the player can
input a set of numbers, and the numbers will be sorted using Bubble Sort
to simulate a "level-up" scenario where the player's scores are sorted 
in ascending order.*/
#include<stdio.h>
int main() {
    int score1[5], score2[5];
    int pass, comp, temp;

    
    printf("Enter the score for player 1:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &score1[i]);
    }
    printf("Enter the score for player 2:\n");
    for(int i=0; i<5; i++) {
        scanf("%d", &score2[i]);
    }

    
    for(pass = 0; pass < 5; pass++) {
        for(comp = 0; comp < 5 - pass - 1; comp++) {
            if(score1[comp]<score1[comp + 1]) {
                temp = score1[comp];
                score1[comp] = score1[comp + 1];
                score1[comp + 1] = temp;
            }
        }
    }

    printf("Level complete! Player 1 scores sorted:\n");
    for(int i =0; i<5; i++) {
        printf("%d\t", score1[i]);
    }
    printf("\n");

   
    for(pass =0;pass<5;pass++) {
        for(comp=0; comp<5-pass-1; comp++) {
            if(score2[comp]<score2[comp + 1]) {
               
                temp = score2[comp];
                score2[comp] = score2[comp + 1];
                score2[comp + 1] = temp;
            }
        }
    }

    printf("Level complete! Player 2 scores sorted:\n");
    for(int i=0; i<5; i++) {
        printf("%d\t", score2[i]);
    }
    printf("\n");
    printf("Let's check who is the winner!!:\n");
    if(score1[0]>score2[0])
    { 
		printf("Player 1 is winner");
	}
	else if(score1[0]<score2[0])
	{
		printf("Player 2 is winner");
	}
	else
	{
		printf("Draw");
	}
    return 0;
}

