#include <stdio.h>

int main(){

  int row, col;
  int a[2][5] = {
    {1,2,3,4,5},
    {6,7,8,9,10}
  };

  int sizerow = sizeof(a)/sizeof(a[0]);
  int sizecol = sizeof(a[0])/sizeof(int);

  for (row = 0; row < sizerow; row++){
    for (col = 0; col < sizecol; col++){
      printf("(%d, %d) = %d\n", row, col, a[row][col]);
    }
  }

  int b[3][3] = {[0][0]=1, [1][1]=1, [2][2]=1};
  printf("\nIdentity Matrix\n");
  for (row = 0; row < 3; row++){
    for (col = 0; col < 3; col++){
      printf("%d ", b[row][col]);
    }
    printf("\n");
  }

}
