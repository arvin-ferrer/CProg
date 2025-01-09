#include <stdio.h>
#include <string.h>

int ownstrlen(char *s){
  int count = 0;
  while (s[count] != '\0'){ // '\0' is a string terminator to know if the string ended
    count++;

  }
  return count;
}

int main(){

  char s[]= "Hello World"; //same as s[] = "Hello World";  
  int sizeOfs = strlen(s); //string initializers either char *s or s[]
  //char *s = "Hello World"  //string literals are immutable
  char *copyS = s;
  printf("%s\n", s);
  copyS[0] = 'z';
  printf("%s\n",s);
  printf("Len of string: %d \n",ownstrlen(s));
}
