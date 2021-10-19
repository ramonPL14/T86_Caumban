#include <stdio.h>

int main() {
    int Temp;

    printf("Enter the Temperature: ");
    scanf("%d", &Temp);
    if (Temp < 0) {
    printf("FREEZING weather\n");
    }
    else if (Temp >= 0 && Temp <= 10) {
    printf("VERY COLD weather\n");
    }
    else if (Temp >= 10 && Temp <= 20) {
    printf("COLD weather\n");
    }
    else if (Temp >= 20 && Temp <= 30) {
    printf("NORMAL in Temp\n");
    }
    else if (Temp >= 30 && Temp <= 40) {
    printf("it's HOT\n");
    }
    else if (Temp >= 40) {
    printf("It's VERY HOT\n");
    }

    return 0;
}