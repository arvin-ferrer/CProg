#include <stdio.h>


int main(){
  
  int i;
  float f[4];
  f[0] = 3.14159;
  f[1] = 1.41412;
  f[2] = 3.92321;
  f[3] = 4.12345;

  for (i = 0; i < 4; i++){
    printf("%f\n", f[i]);
  }

}
