#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 100 
int userDie(void);
int userRoll(void);
int dieRoll (int userNum);
int main (void)
{
	srand(time(NULL));
	int userDieSize = userDie();
	int userRoll = userRoll();
	int dieRoll = dieRoll(userRoll);
}

int userDie(void)
{
	int tempDie;
	printf("Choose the size of your die (no more than 20) \n");
        scanf("%d",&tempDie);
	return tempDie;	
}

int userRoll(void)
{
	int userRoll;
	printf("How many times would you like to roll your die \n");
        scanf("%d", &userRoll);
	return userRoll;	
}

int dieRoll(int userNum)
{
	int dieRoll;
	dieRoll = rand()%userNum + 1;
	return dieRoll;
}
