#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int random,guess;
    int no_of_guess=0;
    srand(time(NULL));
    printf("Welcome to the world of Guessing Numbers\n");
    random=rand()%100+1; //Generating between 1 to 100
do
{
  printf("Please enter your guess between(1 to 100):");
  scanf("%d",&guess); 
  no_of_guess++;
  if(guess<random)
  {
    printf("Guess a larger number.\n");
  }
  else if(guess>random)
  {
    printf("Guess a smaller number.\n");
  }
  else{
    printf("Congratulations you have successfully guessed the number in %d attempts.",no_of_guess);
  }
} 
while (guess!=random);
printf("\n BY BY THANKS FOR PLAYING......");
printf("\n DEVELOPED BY:ROHAN BAG........");   
 return 0;
}