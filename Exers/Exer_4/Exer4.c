#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
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
  char coupon[100];
  double totalPrice = 0;
  int coffee;
  bool active = true;
  char discount;
  double amountPay;
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
        if(coffee == 0){
          printf("\nYour current price to pay is: %0.2f\n", totalPrice);
          mainMenu();
          break;}
           }
        }
    else if(choice == 2){
        while (true){
        printf("Enter your coupon: ");
        scanf("%s", coupon);
        if (strcmp(coupon, "COFFEELOVER") == 0){
          totalPrice = totalPrice - (totalPrice*0.15);
          break;
        }
        else if (strcmp(coupon, "FREESHOT") == 0){
          totalPrice = totalPrice - (totalPrice*0.10);
          break;
        }
        else{
          printf("Invalid coupon\n");
          break;
        }
      }     
        printf("Your current price to pay is: %0.2f\n", totalPrice);
        mainMenu();
    }
    else if(choice == 3){
      printf("\nYour total is: %0.2f\n", totalPrice);
      totalPrice = totalPrice+(totalPrice*0.07);
      printf("Your total with service charge is 7%%: %0.2f\n", totalPrice);
      printf("\nDo you have a PWD ID or a Senior Citizen ID? (y/n): ");
      scanf(" %c", &discount);
      if (discount == 'y' || discount == 'Y'){
        totalPrice = totalPrice - (totalPrice*0.20);
        printf("Your total with 20%% discount: %0.2f\n", totalPrice);
      }
      printf("Enter amount to pay: ");
      scanf("%lf", &amountPay);
      printf("Your change is: %0.2f\n", amountPay-totalPrice);
      printf("\nThank you for shopping!\n");
      mainMenu();
    }
    else if(choice == 0){
      printf("Goodbye!\n");
      break;
    }
  }
}
