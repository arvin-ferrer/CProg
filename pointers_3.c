#include <stdio.h>


int main(){
  int m = 29;
  int *ab = &m;

  printf("Address of m: %p\n", ab);
  printf("Value of m: %d\n\n", *ab);
  printf("Now ab is assigned with the address of m.\n");
  printf("Address of pointer ab %p: \n", ab);
  printf("Content of pointer ab: %d\n\n", *ab);
  *ab = 7;
  printf("The pointer variable ab is assigned with the value of 7 now.\n");
  printf("Address of m : %p\n", ab);
  printf("Value of m : %d\n", *ab);
}
