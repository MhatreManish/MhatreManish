#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter any number :-");
    scanf("%d",&a);
    printf("Enter another number :-");
    scanf("%d",&b);
    c=a+b;
    printf("\nResult of Addition %d",c);
    c=a-b;
    printf("\nResult of Substraction %d",c);
    c=a*b;
    printf("\nResult of Multiplication %d",c);
    return 0;
}