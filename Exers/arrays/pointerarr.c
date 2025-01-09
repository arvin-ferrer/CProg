#include <stdio.h>

//multiply each element of the array to 2
void double_arr(int *b, int len){
  for (int i = 0; i < len; i++){
    b[i] *= 2;
  }

}
int main(){
  
  int a[] =  {1,2,3,4,5};
  int *p;
  p = a; //same as p = &a[0]
  
  for (int i=0; i < 5; i++){
    p = &a[i];
    
    printf("Address: %p  Value: %d\n", p, *p);
  
  }
  int sizeofarr = sizeof(a)/sizeof(a[0]);
  double_arr(a, sizeofarr);

  for (int i = 0; i < 5; i++){
    printf("New val: %d\n", a[i]);
  }

}
