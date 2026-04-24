#include <stdio.h>
int main(void){
    int width;
    int lenght;
    printf("Enter Width: ");
    scanf("%d", &width);
    printf("Enter Lenght: ");
    scanf("%d", &lenght);
    printf("Area %d\n", width*lenght);
    printf("perimeter %d\n", 2*(width+lenght));
}

