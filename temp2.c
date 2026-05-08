#include <stdio.h>
int main (void){

    int Celcius;
    float Fahrenheit = (Celcius*1,8)+32;

    printf("Enter Celcius ");
    scanf("%d" , &Celcius);
    printf("%d°C = %2.f°f \n", Celcius, (Celcius*1.8)+32);

    if(Celcius < 0){
        printf("❄️ Freazing weather \n");
    }
    else if(Celcius < 10){
        printf("🥶 Very cold weather \n");
    }
    else if(Celcius < 20){
        printf("😎 Chilly weather \n");
    }
    else if(Celcius < 30){
        printf("🌄 Normal weather \n");
    }
    else if(Celcius < 40){
        printf("☀️ Hot weather \n");
    }
    else if(Celcius > 40){
        printf("🔥 Very hot weather \n");
    }

}

