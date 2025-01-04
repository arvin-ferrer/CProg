#include <stdio.h>
#include <math.h>

void rightTriangle(void){
  int dimension;
  printf("Enter dimension: ");
  scanf("%d", &dimension);
  for (int i = 1; i < dimension+1; i++){
    for (int j = 1; j <= i; j++){
      printf("*");
    
    }
    printf("\n");
  }

}


//Remade version of <char> * <int>
void loops(int i){
  for (int j = 1; j < i+1; j++){
    printf("* ");
  }
  printf("\n");
}



void rightTriangleSequential(void){
  int dimension;  
  printf("Enter dimension: ");
  scanf("%d", &dimension);
  for (int i = 1; i < dimension+1; i++){
    loops(i);
  } 

}
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


  // rightTriangle(); //nested loop version

  rightTriangleSequential(); //sequential version no nested loops

  // for loop version
  // for(int start=1; start != pow(n,2)+1; start++){
    // printf("%d ", start);
    // if(start % n == 0){
      // printf("\n");
    // }
  // }




}

