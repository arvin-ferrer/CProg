#include <stdio.h>


int main(){
  
  int i;
  double f[4];
  f[0] = 3.14159;
  f[1] = 1.41412;
  f[2] = 3.92321;
  f[3] = 4.12345;

  for (i = 0; i < 4; i++){
    printf("%d: %f\n",i, f[i]);
  }
  printf("size of an array: %zu\n", sizeof(f)/sizeof(double));
  
  int j;
  int a[5] = {22, 37, 370, 23 }; //remaining elements in the array will be automatically set to zero
  int lenArr = sizeof(a)/sizeof(int);
  for(int z = 0; z < lenArr; z++){
    printf("%d\n", a[z]);
  }
  // int a[3] = {1,2,3};
  // same as
  // int a[] = {1,2,3};
  

}
