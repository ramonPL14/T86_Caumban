#include <stdio.h>

int main() {
    int drinks, price, payment, change;
    
    printf("Select your order\n");
    printf("[1] Pepsi(100)\n");
    printf("[2] Dr.Pepper(120)\n");
    printf("[3] Coca-Cola(95)\n");
    printf("Choice: ");
    scanf("%d", &drinks);
    
    switch(drinks) {
      case 1:
        price = 100;
        printf("Input Payment: ");
        scanf("%d", &payment);
        if(payment >= price) {
          printf("You have purchased Pepsi.\n");
          change = payment - price;
          printf("Change: %d", change);
        }
        else{
          printf("You don't have enough funds!");
        }
        break;
      case 2:
        price = 120;
          printf("Input your payment: ");
          scanf("%d", &payment);
        if(payment >= price) {
          printf("You have purchased Dr.Pepper.\n");
          change = payment - price;
          printf("Change: %d", change);
        }
        else{
          printf("You don't have enough funds!");
        }
        break;
      case 3:
        price = 95;
          printf("Input Payment: ");
          scanf("%d", &payment);
        if(payment >= price) {
          printf("You have purchased Coca-Cola.\n");
          change = payment - price;
          printf("Change: %d", change);
        }
        else {
          printf("You don't have enough funds!");
        }
        break;
      default:
        printf("Not in the choices");
        }
        return 0;
        }
        
        
        
        
        
        
    
    