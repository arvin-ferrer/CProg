/* Starting Point */
#include <signal.h>
#include <stdio.h>
#include <stdbool.h> //needed for symbolic names true and false

int main(void){

  printf("Hello World\n");
  int i;
  float f;
  i = 2;
  f = 3.14;
  int z, y;
  z = 10, y = 15;
  printf("%d\n", z+y);
  char *s = "Hello!";
  bool x = true;

  if (x){
    printf("True\n");
  }
  printf("%s i= %d and f= %f!\n", s, i, f); 
  //%s is string
  //%d is integer
  //%f is float or double

  //while loop
  int j= 0;
  while (j < 10){
    printf("i is now %d\n", j);
    j++;
  }
  do {
    printf("--do-while: j is %d\n", j);
    j++;
  }
  while(j < 10);
  printf("done\n");

  //for loop
  for (int i = 0; i <10; i++){
    printf("i is now: %d\n", i);
  }
  //you can use for loop to do multiple things
  for (i = 2, j = 9; i < 10; i++, j--){
    printf("%d, %d\n", i, j);
  }
  //an empty for loop is an infinite loop 

  
  //arrays
  



}
 
