//write a program to find if a given number is netural or not using a ladder if else.

#include<stdio.h>
#include<conio.h>

void main(){
int j;

clrscr();
printf("enter the value of the first number:");
scanf("%d",&j);
if(j<0){
printf("the number is nagative");
}else if (j == 0){
printf("the number is neutral");
}else{
printf("the number is positive");
}
getch();
}
