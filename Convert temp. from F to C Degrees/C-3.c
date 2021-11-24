#include<stdio.h>
#include<conio.h>
void main(){
    float f,c;
    printf("Enter the number that you want to convert from `F to `C degree(s) :-\n");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("And this is your conversion result :- %f Celsius",c);
    getch();
}