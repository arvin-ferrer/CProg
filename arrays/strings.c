#include <stdio.h>
#include <string.h>

int ownstrlen(char *s){
  int count = 0;
  while (s[count] != '\0'){ // '\0' is a string terminator to know if the string ended
    count++;

  }
  return count;
}

void copystring(char s[]){
  int lenOfs = strlen(s);
  char copy[lenOfs];

  strcpy(copy, s);
  printf("\nBefore modifying\n");
  printf("Original: %s\n", s);
  printf("Copy: %s\n", copy);
  printf("modified\n");
  copy[0] = 'S';
  copy[1] = 'A';
  printf("Original: %s\n", s); //the original didn't change as opposed to using the assignment operator
  printf("Copy: %s\n", copy);
}

int main(){
  char s[]= "Hello World"; //same as s[] = "Hello World";  
  char z[] = s;

  int sizeOfs = strlen(s); //string initializers either char *s or s[]
  //char *s = "Hello World"  //string literals are immutable

  char *copyS = s; //you are copying a pointer instead of a string

  printf("%s\n", s);
  copyS[0] = 'z';
  printf("%s\n",s); 
  printf("Len of string: %d \n",ownstrlen(copyS));

  char sample[] = "AMIS";
  copystring(sample);
}
