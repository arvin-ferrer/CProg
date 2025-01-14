#include <stdio.h>


void writetoF(char *file){
  FILE *fh_output;
  fh_output = fopen(file, "w");
  int c;
  fputs("A string\n", fh_output);
  fputs("abc\n", fh_output);
  fputs("123\n", fh_output);
  fclose(fh_output);

}

int main(){
  FILE *fp;
  fp = fopen("file.txt", "r");
  
  int c;
  while ((c = fgetc(fp)) != EOF)
  {
      printf("%c", c);
  }
  fclose(fp);


  writetoF("io.txt");
}
