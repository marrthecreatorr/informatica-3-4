#include <stdio.h>
int main (void){
    int movrunt;
    int startt;
    printf("How long in the movie in minutes? ");
    scanf("%d", %movrunt);
    printf("What is the starting time? \n");
    scanf("%d", &start);
    int hrt = movrunt/60;
    int mint = hrt %1;
    int endt = startt+hrt+mint;
    int endtm = endt %1;

    printf("The movie is %d hr long\n", hrt);
    printf("%d min long\n", mint);
    printf("The end time is %d \n", endt);
    printf("%d \n", endtm);

}
