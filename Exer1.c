#include <stdio.h>
#include <math.h>

int main(void){
  int frequency;
  int cost;
  int weeks = 52;
  // float totalCost = cost*frequency;
  double interest = 0.04;
  
  printf("How many times in a week do you buy milk tea? ");
  scanf("%d", &frequency);
  printf("How much does your milk tea order typically cost? ");
  scanf("%d", &cost);

  int totalCost = (cost*frequency)*52;
  double futureValue1 = totalCost*((pow((1+interest), 1)-1)/interest);
  double futureValue5 = totalCost*((pow((1+interest), 5)-1)/interest);
  double futureValue10 = totalCost*((pow((1+interest), 10)-1)/interest);
  double futureValue20 = totalCost*((pow((1+interest), 20)-1)/interest);
  double futureValue40 = totalCost*((pow((1+interest), 40)-1)/interest);

  printf("\nThe total amount you will spend on milk tea per year is Php %d\n", totalCost);
  printf("\nIf you save this money every year in a high-yield bank account earning 4%% APY, you would have earned an extra\n");
  printf("\tPhp %.0f in 1 year (vs. spending Php %d),\n", round(futureValue1), totalCost*1);
  printf("\tPhp %.0f in 5 years (vs. spending Php %d),\n", round(futureValue5), totalCost*5);
  printf("\tPhp %.0f in 10 years (vs. spending Php %d),\n", round(futureValue10), totalCost*10);
  printf("\tPhp %.0f in 20 years (vs. spending Php %d), and\n", round(futureValue20), totalCost*20);
  printf("\tPhp %.0f in 40 years (vs. spending Php %d).\n", round(futureValue40), totalCost*40);


}
