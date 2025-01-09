#include <stdio.h>

int main(){
  
  int a[5] =  {1,2,3,4,5};
  int *p;

  p = a; //same as p = &a[0]
  printf("%d\n", *p);
  
  for (int i=0; i < 5; i++){
    p = &a[i];
    
    printf("Address: %p  Value: %d\n", p, *p);
    

  }
}
