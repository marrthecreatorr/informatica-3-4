#include <stdio.h>
int main (void){
    int runningTime;
    printf("Enter movie running time?");
    scanf("%d", &runningTime);
    int startHour;
    int startMin;
    printf("Start time: ");
    scanf("%d:%d" , &startHour, &startMin);

    int hours = runningTime / 60;
    int minutes = runningTime % 60;

    int endHour = startHour + hours;
    int endMin = startMin + minutes;

    printf("The movie will last %d hr and %d min\n" , hours, minutes);
    printf("End Time: %d:%d\n", endHour, endMin);
}
