#include<stdio.h>
#include<stdlib.h>
void main()
{
int i,qty,price=0,choice;
char option;
do
{
printf("Choose the ice cream from bellow:\n");
printf("1.Vanila\n2.Stawberry\n3.Chocolate\n4.Blue berry\n5.Exit\n");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("Vanila\n");
printf("Enter the quantity\n");
scanf("%d",&qty);
price+=100*qty;
break;
case 2:printf("Strawberry\n");
printf("Enter the quantity\n");
scanf("%d",&qty);
price+=130*qty;
break;
case 3:printf("Chocolate\n");
printf("Enter the quantity\n");
scanf("%d",&qty);
price+=150*qty;
break;
case 4:printf("Strawberry\n");
printf("Enter the quantity\n");
scanf("%d",&qty);
price+=170*qty;
break;
case 5:exit(0);
}
printf("Do you want to buy more ice cream? (y/n): ");
scanf(" %c", &option);
}
while(option=='y'||option=='Y');
printf("Price of the ice cream:%d\n",price);
}
