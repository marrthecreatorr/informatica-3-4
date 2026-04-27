#include <stdio.h>
int main (void){

    int Celcius;
    float Fahrenheit = (Celcius+32)*1.8;

    printf("Enter Celcius ");
    scanf("%d" , &Celcius);
    printf("celcius: %d ° \n", Celcius);
    printf("Fahrenheit: %.2f \n", (Celcius*1.8)+32);
}
