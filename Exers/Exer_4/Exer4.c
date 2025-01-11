#include <stdio.h>
#include <stdbool.h>

void mainMenu(void){
    
    printf("\nWELCOME TO SILVERLOCK'S COFFEE SHOP!\n\n");
    printf("MAIN MENU\n");
    printf("[1] Choose coffee\n");
    printf("[2] Enter discount coupon\n");
    printf("[3] Compute total and pay\n");
    printf("[0] Exit\n");
}

void coffees(){
    int totalPrice;    
    int coffee;
    printf("\nCOFFEES\n");
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
  int coffee;
  bool active = true;
  mainMenu();
  while (active){
    
    printf("Enter choice: ");
    scanf("%d", &choice);
    if (choice == 1){
      while(true){
        coffees();
        printf("Choose coffee: ");
        scanf("%d", &coffee);
        switch(coffee){
          case 1:
            totalPrice += 150;
            break;
          case 2:
            totalPrice += 200;
            break;
          case 3:
            totalPrice += 180;
            break;
          case 4:
            totalPrice += 140;
            break;
          case 5:
            totalPrice += 220;
            break;
          case 0:
            mainMenu();
            break;
          default:
            printf("Invalid choice, try again\n");
            break;
        }   
      }

      
    }
  }

}
