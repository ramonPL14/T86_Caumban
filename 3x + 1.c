#include <stdio.h>

int main() {
    int num;
    
    printf("Input any Integer: ");
    scanf("%d", &num);
    
    while(num > 1)
    {
      if(num % 2 == 0)
      {
        num = num / 2;
        printf("The current value is: %d\n", num);
      }
      else
      {
        num = num * 3 + 1;
        printf("The cuRrent value is: %d\n", num);
      }
    }
    brk(0);
    } 
    