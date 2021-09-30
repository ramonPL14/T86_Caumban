#include <stdio.h>

int main ()
{
  int RPM = 3000, sec = 60, degs = 360, result;  
  printf("Enter Revolution Per Minute:", RPM);
  scanf("%d", &RPM);
  printf("Enter seconds:", sec);
  scanf("%d", &sec);
  printf("Enter degrees:", degs);
  scanf("%d", &degs);
/*1 minute is = 60 sec*/
  result = RPM / sec * degs;
  printf("the tire rotates %d in 1 second", result);
  return 0;
}
  
  
  

  
    