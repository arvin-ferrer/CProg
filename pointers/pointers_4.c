#include <stdio.h>

int main(){

  int m = 300;
  double fx = 300.600006;
  int cht = 'z';
  
  int *ptrM = &m;
  double *ptrfx = &fx;
  int *ptrCht = &cht;
  printf("Using & operator :\n");
  printf("------------------------\n");
  printf("address of m = %p\n", &m);
  printf("address of fx = %p\n", &fx);
  printf("address of cht = %p\n", &cht);

  printf("Using & and * operator\n");
  printf("---------------------------\n");
  printf("value at address of m = %d\n", *(&m));
  printf("value at address of fx = %f\n", *(&fx));
  printf("value at address of cht = %c\n", *(&cht));

  printf("Using only pointer variable\n");
  printf("-------------------------------\n");
  printf("address of m = %p\n", ptrM);
  printf("address of fx = %p\n", ptrfx);
  printf("address of cht = %p\n", ptrCht);

  printf("Using only pointer operator : \n");
  printf("----------------------------------\n");
  printf("value at address of m = %d\n", *ptrM);
  printf("value at address of fx = %f\n", *ptrfx);
  printf("value at address of cht = %c\n", *ptrCht);

}
