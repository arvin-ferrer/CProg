#include <stdio.h>

void mainMenu(void){
    
    printf("WELCOME TO SILVERLOCK'S COFFEE SHOP!\n\n");
    printf("MAIN MENU\n");
    printf("[1] Choose coffee\n");
    printf("[2] Enter discount coupon\n");
    printf("[3] Compute total and pay\n");
    printf("[0] Exit\n");

}

void coffees(void){
  printf("COFFEES");
  printf("[1] Espresso: P150.00\n");
  printf("[2] Cappuccino: P200.00\n");
  printf("[3] Latte: P180.00\n");
  printf("[4] Americano: P140.00\n");
  printf("[5] Mocha: P220.00\n");
  printf("[0] Back to main menu\n");
}

int main(){
  
  int choice;
  int totalPrice = 0;
  
  while (1){
  mainMenu();
  printf("Enter choice: ");
  scanf("%d", &choice);
  }
}
