#include<stdio.h>
#include<conio.h>
void main(){
    float a1,p,a2,c,l,w,r;
    printf("Enter length of rectangle(in centi-meter) :-\n");
    scanf("%f",&l);
    printf("Now enter weight of rectangle(in centi-meter) :-\n");
    scanf("%f",&w);
    a1=l*w;
    p=(l+w)*2;
    printf("Enter redius of circle(in centi-meter) :-\n");
    scanf("%f",&r);
    a2=3.14159*r*2;
    c=2*3.14159*r;
    printf("\nThis is area of rectangle :- %fcm \nAnd this is perimeter of rectangle :- %fcm",a1,p);
    printf("\nThis is area of circle :- %fcm \nAnd this is circumference of circle :- %fcm",a2,c);
}