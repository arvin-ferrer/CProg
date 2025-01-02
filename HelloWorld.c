/* Starting Point */
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
  //%f is float

}
 
