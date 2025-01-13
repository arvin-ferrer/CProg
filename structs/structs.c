
#include <stdio.h>

struct car{
  char *name;
  float price;
  int speed;

};

int main(){


  struct car saturn = {"Satus SL\2", 16000.00, 175}; //struct initializer
  // saturn.name =  "Saturn SL/2";
  // saturn.price = 15999.99;
  // saturn.speed = 175;
  printf("Name: %s\n", saturn.name);
  printf("Price (USD): %f\n", saturn.price);
  printf("Top speed (km): %d\n", saturn.speed);

}


