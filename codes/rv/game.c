//Code by GVV Sharma
//May 9, 2025
//Simulating the board game
//using two dice
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int num1,num2,score1=0;//numbers on the dice
int score2=0,temp;//numbers on the dice
while(1){
label1: printf("\n\nPlayer 1 inputs\n");
printf("\n Die 1:");
scanf("%d",&num1);
if(num1< -6 || num1 > 6 || num1 == 0){
	printf("Wrong input\n");
	goto label1;
}
label2: printf("\n Die 2:");
scanf("%d",&num2);
if(num2< -6 || num2 > 6|| num2 == 0){
	printf("Wrong input\n");
	goto label2;
}
score1=(num1*num2 > 0)?score1+1:score1-1;
printf("Player 1 score is %d",score1);
if(score1 == 104 || score1 == -104){
	printf("Player 1 wins\n");
	exit(0);
}
label3:printf("\n\nPlayer 2 inputs\n");
printf("\n Die 1:");
scanf("%d",&num1);
if(num1< -6 || num1 > 6|| num1 == 0){
	printf("Wrong input\n");
	goto label3;
}
label4: printf("\n Die 2:");
scanf("%d",&num2);
if(num2< -6 || num2 > 6|| num2 == 0){
	printf("Wrong input\n");
	goto label4;
}
score2=(num1*num2 > 0)?score2+1:score2-1;
printf("Player 2 score is %d",score2);
if(score2 == 104 || score2 == -104){
	printf("Player 2 wins\n");
	exit(1);
}
	      }
	return 0;
}
