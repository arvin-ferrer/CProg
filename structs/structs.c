#include <stdio.h>


struct car{
  char *name;
  float price;
  int speed;

};

int main(){


  struct car saturn;
  saturn.name =  "Saturn SL/2\n";
  saturn.price = 15999.99;
  saturn.speed = 175;
  printf("%lf\n", saturn.price);

}


