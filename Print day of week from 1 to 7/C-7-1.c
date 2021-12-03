#include<stdio.h>
#include<conio.h>

void main(){
    short int i;
    printf("Enter any number from 1 to 7 too represent it day of week :- ");
    scanf("%d",&i);
    switch(i){
        case 1:
            printf("Sunday!");
        break;
        case 2:
            printf("Monday!");
        break;
        case 3:
            printf("Tuesday!");
        break;
        case 4:
            printf("Wednesday!");
        break;
        case 5:
            printf("Thursday!");
        break;
        case 6:
            printf("Friday!");
        break;
        case 7:
            printf("Saturday!");
        break;
        default:
            printf("This number is invalid!");
    }
}