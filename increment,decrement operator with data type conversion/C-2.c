#include<stdio.h>
#include<conio.h>
void main(){
    float a;
    printf("\nEnter a number :-");
    scanf("%f",&a);
    printf("\nThis is float value of your number %f",a);
    int b=(float)a;
    printf("\nFloat is converted to integer! %d",b);
    printf("\nThis is increment value in integer %d of %f",++b,a);
    b=--b;
    printf("\nThis is decrement value in integer %d of %f",--b,a);
    getch();
}