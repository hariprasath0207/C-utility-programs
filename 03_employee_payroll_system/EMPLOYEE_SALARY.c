#include<stdio.h>
#include<conio.h>

void salary(double*);
void hra(double, double*);
void da(double, double*);
void net(double, double*, double*, double*);

void main()
{
 unsigned int choice;
 double sal = 0, s_hra = 0, s_da = 0, net_sal = 0;
 clrscr();
 do
 {
  printf("\n\n--EMPLOYEE PAYROLL SYSTEM--");
  printf("\n 1)Enter salary\n 2)Cal. HRA\n 3)Cal. DA\n 4)Display Net salary\n 5)Exit");
  printf("\n\nEnter your choice : ");
  scanf("%u", &choice);
  switch(choice)
  {
   case 1:
   salary(&sal);
   printf("Salary Entered : %.2lf", sal);
   break;
   case 2:
   hra(sal, &s_hra);
   break;
   case 3:
   da(sal, &s_da);
   break;
   case 4:
   net(sal, &s_hra, &s_da, &net_sal);
   printf("| Basic salary - %.2lf |\n", sal);
   printf("| HRA          -  %.2lf |\n", s_hra);
   printf("| DA           -  %.2lf |\n", s_da);
   printf("| Net salary   - %.2lf |\n", net_sal);
   break;
   case 5:
   printf("--Exiting--");
   break;
   default:
   printf("--Enter the proper options--");
   break;
  }
 }while(choice!=5);
}

void salary(double *sal)
{
 *sal=0;
 printf("\nEnter the salary : ");
 scanf("%lf", sal);
}

void hra(double sal, double *s_hra)
{
 if(sal==0)
 {
  printf("\nFirst enter the salary by selecting the Option-1\n");
 }
 else
 {
  *s_hra = sal * 0.20;
  printf("\nEmployee's salary : %.2lf", sal);
  printf("\nHRA for %.2lf salary is %.2lf", sal, *s_hra);
 }
}
void da(double sal, double *s_da)
{
 if(sal==0)
 {
  printf("\nFirst enter the salary by selecting the Option-1\n");
 }
 else
 {
  *s_da = sal * 0.10;
  printf("\nEmployee's salary : %.2lf", sal);
  printf("\nDA for %.2lf salary is %.2lf", sal, *s_da);
 }
}

void net(double sal, double *s_hra, double *s_da, double *net_sal)
{
 if(sal==0)
 {
  printf("\nFirst enter the salary by selecting the Option-1\n");
 }
 else
 {
  *s_hra = sal * 0.20;
  *s_da = sal *0.10;
  *net_sal = sal + *s_hra + *s_da;
 }
}
