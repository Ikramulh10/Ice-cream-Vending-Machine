#include<stdio.h>
#include<stdlib.h>
void main()
{
int num=rand()%10+1;
int user;
while(1)
{
printf("Guess the number between 1 to 10\n");
scanf("%d",&user);
if(num==user)
{
printf("Hurrah! You guessed correctly\n");
break;
}
else
{
printf("Incorect guess\n");
}}}

