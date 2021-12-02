#include<stdio.h>
#include<conio.h>

void main(){
    int a,b,c;
    printf("\nEnter any three numbers to find greatest number among them !");
    printf("\nEnter 1st number :-");
    scanf("%d",&a);
    printf("\nEnter 2nd number :-");
    scanf("%d",&b);
    printf("\nEnter 3rd number :-");
    scanf("%d",&c);
    /*Here nested if-else starts*/
    if(a>b){
        if(a>c){
            printf("1st number %d is greatest number",a);
        }
    }
    if(b>c){
        printf("2nd number %d is greatest number",b);
    }
    else{
        printf("3rd number %d id greatest number",c);
    }
    getch();
}