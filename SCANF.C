#include<stdio.h>
#include<conio.h>
void main(){
int r;
float pi=3.14,area;
clrscr();

printf("Enter the value of redius: ");
scanf("%d",&r);
area=pi*r*r;
printf("area of circle:%f",area);

getch();

}