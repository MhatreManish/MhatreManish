#include<stdio.h.>
#include<conio.h>

void main(){
    char c;
    int lower_case_vowel, Upper_case_vowel;
    printf("Enter any letter to find it`s vowel or not :- ");
    scanf("%c",&c);
    lower_case_vowel = (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='y' || c=='w');
    Upper_case_vowel = (c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='Y' || c=='W');
    if(lower_case_vowel||Upper_case_vowel){
        printf("It`s an vowel!");
    }
    else{
        printf("it`s a consonant!");
    }
    getch();
}