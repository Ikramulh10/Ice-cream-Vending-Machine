#include<stdio.h>
struct student
{
    char name[50];
    int rollno;
    int mark;
};
void main()
{
struct student s;
int n,i;
printf("Enter the number of student\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
 printf("Enter the name of %d students\n",i+1);
 scanf("%s",&s.name);
 printf("Enter the rollno of %d student\n",i+1);
 scanf("%d",&s.rollno);
 printf("Enter the mark of %d student\n",i+1);
 scanf("%d",&s.mark);
}
printf("Student details are:\n");
for(i=0;i<n;i++)
{
printf("\nName:%s\nRoll Number:%d\nMark:%d\n",s.name,s.rollno,s.mark);
}
}
