#include <stdio.h>

int main(){
    int Input_Seconds;
    printf("Enter Seconds:");
    scanf("%d",&Input_Seconds);
    
    int Hours,Minutes,Seconds;
    Hours=Input_Seconds/3600;
    Minutes=(Input_Seconds%3600)/60;
    Seconds=(Input_Seconds%3600)%60;

    printf("%d Hours:%d Minutes:%d Seconds",Hours,Minutes,Seconds);

    return 0;
}