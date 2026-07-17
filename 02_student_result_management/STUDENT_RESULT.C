#include<stdio.h>
#include<conio.h>

void enter_marks(int*);
void total(int*, int*);
void average(int, float*);
void result(float);

void main()
{
 int choice;
 int s[5]={0};
 int total_marks=0;
 float avg=0.0;
 clrscr();
 do
 {
 printf("\n\n--STUDENT RESULT MANAGEMENT--");
 printf("\n 1)Enter marks\n 2)Display Total\n 3)Display Average\n 4)Display Result\n 5)Exit");
 printf("\n\n Enter the choice : ");
 scanf("%d",&choice);
  switch(choice)
  {
   case 1:
    enter_marks(s);
    break;
   case 2:
    total(s,&total_marks);
    printf("Total marks : %d",total_marks);
    break;
   case 3:
    average(total_marks,&avg);
    printf("Average mark : %.2f",avg);
    break;
   case 4:
    result(avg);
    break;
   case 5:
    printf("**Exiting**");
    break;
   default:
    printf("Select the proper option");
    break;
  }
 }while(choice!=5);
}

void enter_marks(int *s)
{
 int i=0;
 for(i=0;i<5;i++)
 {
  do
  {
   printf("Enter the mark for Subject %d : ",i+1);
   scanf("%d",&s[i]);
   if(s[i]>100)
   {
    printf("\nInvalid mark! Please enter 100 or below.\n\n");
   }
  }while(s[i]>100);
 }
}

void total(int *s, int *total_marks)
{
 int i;
 *total_marks=0;
 for(i=0;i<5;i++)
 {
  *total_marks+=s[i];
 }
}

void average(int total_marks, float *avg)
{
 *avg=(total_marks/5.0);
}

void result(float avg)
{
 if(avg<40)
 {
  printf("Student result : FAIL");
 }
 else if(avg==40)
 {
  printf("Student result : JUST PASS");
 }
 else
 {
  printf("Student result : PASS");
 }
}
