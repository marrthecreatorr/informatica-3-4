#include <stdio.h>

int main (void){
    printf("vending machine stock\n");

    //create variables fpr first snack (Chips)
    float Price1 = 65.99;
    int Quantity1 = 40;
    char Code1 = 'C';

    //Oreos
    float Price2 = 65.89;
    int Quantity2 = 30;
    char Code2 = 'O';

    //Juice
    float Price3 = 30.85;
    int Quantity3 = 25;
    char Code3 = 'J';

    printf("Welcome to your favorites snack machine\n");
    printf(".........................................\n");
    printf("\n");

    printf("Item name: Chips\n");
    printf("Price: %.2f \n", Price1);
    printf("Quantity Aviable: %d \n", Quantity1);
    printf("selection code: %c \n", Code1);
    printf("\n");

    printf("Item name: Oreos\n");
    printf("Price: %.2f \n", Price2);
    printf("Quantity Aviable: %d \n", Quantity2);
    printf("selection code: %c \n", Code2);
    printf("\n");

    printf("Item name: Juice\n");
    printf("Price: %.2f \n", Price3);
    printf("Quantity Aviable: %d \n", Quantity3);
    printf("selection code: %c \n", Code3);
    printf("\n");
}
