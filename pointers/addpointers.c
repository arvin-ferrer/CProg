#include <stdio.h>

int add(int *ptr1, int *ptr2){

  int sum;
  sum = *ptr1 + *ptr2;
  return sum;

}

int main(){

  int array[] = {1,3,4,5,6,7};
  int size = sizeof(array)/sizeof(int);
  printf("(%d)\n", size);
  int num1, num2;
  int *ptr1 = &num1;
  int *ptr2 = &num2;
  printf("Input the first number: ");
  scanf(" %d", &num1);
  printf("Input the second number: ");
  scanf(" %d", &num2);
  
  printf("The sum of the entered numbers is %d \n", add(ptr1, ptr2));

}
