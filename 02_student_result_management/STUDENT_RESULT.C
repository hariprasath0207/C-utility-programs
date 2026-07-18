#include<stdio.h>
#include<conio.h>

void enter_marks(int*, int*); 
void total(int*, int*);
void average(int, float*);
void result(float, int);  

int main()
{
 int choice;
 int s[5]={0};
 int total_marks=0;
 float avg=0.0;
 int marks_entered = 0;
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
    enter_marks(s, &marks_entered);
    break;
   case 2:
    if(!marks_entered)
     {
     printf("Please enter marks first (Option 1)");
     }
    else
     {
     total(s,&total_marks);
     printf("Total marks : %d",total_marks);
     }
     break;
   case 3:
    if(!marks_entered)
     {
     printf("Please enter marks first (Option 1).");
     }
    else
     {
     total(s,&total_marks);
     average(total_marks,&avg);
     printf("Average mark : %.2f",avg);
     }
     break;
   case 4:
    if(!marks_entered)
    {
     printf("Please enter marks first (Option 1).");
    }
    else
    { f
     total(s,&total_marks);
     average(total_marks,&avg);
     result(avg, total_marks);
    }
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

void enter_marks(int *s, int *marks_entered)
{
 int i=0;
 for(i=0;i<5;i++)
 {
  do
  {
   printf("Enter the mark for Subject %d (0-100): ",i+1);
   scanf("%d",&s[i]);
   if(s[i] < 0 || s[i] > 100)
   {
    printf("\nInvalid mark! Please enter a value between 0 and 100.\n\n");
   }
  }while(s[i] < 0 || s[i] > 100);
 }
 *marks_entered = 1;
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

void result(float avg, int total_marks)
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
