#include <stdio.h>
#include <math.h>


int main(void){
  int n;
  int start = 0;
  printf("Enter the value of n: ");
  scanf("%d", &n);
  // while loop version
  while(start < pow(n, 2)){
    printf("%d  ", start+1);
    start++;
    if (start % n == 0){
      printf("\n");
    }
  
  }
  
  // for loop version
  // for(int start=1; start != pow(n,2)+1; start++){
    // printf("%d ", start);
    // if(start % n == 0){
      // printf("\n");
    // }
  // }




}

