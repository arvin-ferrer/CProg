#include <stdio.h>
#include <stdbool.h>

void mainMenu(){

  printf("\nMAIN MENU\n");
  printf("A. FIBONACCI SERIES\n"); 
  printf("B. MILITARY TIME\n");
  printf("C. EXIT\n\n");

}


void fibo(){

  int first = 0;
  int second = 1;
  int months = 12;
  int rabbit[12];
  int total = 0;
  for (int i = 0; i < months; i++){
    int x = second;
    second = first + second;
    first = x;
    rabbit[i] = first;
  }
  printf("RABBIT ARR: ");
  printf("[");
  for (int j = 0; j < 12; j++){
    printf(" %d", rabbit[j]);

  }
  printf("]\n");
  for (int i = 0; i < 12; i++){
    total += rabbit[i];
  }
  printf("TOTAL RABBITS: %d\n", total);

}

void military_time(){
  
  int milTime;
  int hour;
  int min;
  char period[3];
  printf("Input time in military format: ");
  scanf("%4d", &milTime);
  hour = milTime/100;
  min = milTime%100;
  if (hour >= 12){
    if (hour > 12){
      hour-= 12;}
      
  
    sprintf(period, "PM");
  }
  else{
    if (hour == 0){
      hour = 12;
    }
    sprintf(period, "AM");
  }
  if (min < 60){
    printf("OUTPUT: %d:%02d%s\n", hour, min, period);
  }
  else{
    printf("\nINVALID TIME!\n");
  }
  }
int main(){

  bool active = true; 
  char letter;
  mainMenu();
  
  printf("CHOOSE LETTER TO EXECUTE: ");
  while(active){
    scanf("%c", &letter);
    if (letter == 'a' || letter == 'A'){
      fibo();
      mainMenu();
    printf("CHOOSE LETTER TO EXECUTE: ");

    }
    else if (letter == 'b' || letter == 'B'){
      military_time();
      mainMenu();
    printf("CHOOSE LETTER TO EXECUTE: ");
    }
    else if (letter == 'c' || letter == 'C'){
      printf("byebye :)\n");
      break;
    }
  }






}


