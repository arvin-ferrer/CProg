#include <stdio.h>


int main(){
  
  FILE *fp;
  fp = fopen("file.txt", "r");
  
  int c;
  while ((c = fgetc(fp)) != EOF)
  {
      printf("%c", c);
  }
  fclose(fp);


}
