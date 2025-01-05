#include <stdio.h>


//all about pointers
int main(void){

  //pointers
  //%zu is the format specifier for type size_t
  printf("an int uses %zu bytes of memory\n", sizeof(int));
  int a = 5;
  int* b = &a;
  printf("The value of a is %d\n", a);
  printf("and its address is %p\n", &b); //dereferencing a through *b  
  //dereferencing
  
  int var;
  int *pointer;

  pointer = &var;
  var = 10;
  *pointer = 20;
  printf("var is %d\n", var); 
  printf("i is %d dereference-pointer is the same as var", *pointer); // "20"! dereference-p is the same as i!
  

}
