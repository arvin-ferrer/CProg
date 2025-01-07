#include <stdio.h>

int main(){
  int m = 10;
  int n;
  int o;
  int *z;

  z = &m;
  *z = m;
  int *pTn = &n;
  int *pTo = &o;
  int **pTz = &z;

  printf("Pointer: Show the basic declaration of pointer: \n");
  printf("-----------------------------------------------------\n");
  printf("Here is m=%d, n and o are two integer variable and *z is an integer\n", m);
  printf("z stores the address of m = %p\n", z);
  printf("*z stores the value of m = %d\n", *z);
  printf("&m is the address of m = %p\n", z);
  printf("&n stores the address of n = %p\n", pTn);
  printf("&o stores the address of o = %p\n", pTo);
  printf("&z stores the address of z = %p\n", z);


}
