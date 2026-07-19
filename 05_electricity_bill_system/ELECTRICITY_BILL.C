#include<stdio.h>
#include<conio.h>

void enter_units(unsigned int*);
void cal_bill(unsigned int,double,double,double*);
void dis_bill(unsigned int*,double*);

void main()
{
 int c;
 unsigned int u=0;
 double b=0,b1=0,b2=0;
 clrscr();
 do
 {
  printf("\n---ELECTRICITY BILL SYSTEM---\n");
  printf("1.Enter units\n2.Calculate bill\n3.Display bill\n4.Exit\n");
  printf("\nSelect your's need : ");
  scanf("%d",&c);
  switch(c)
  {
   case 1:
   enter_units(&u);
   break;
   case 2:
   cal_bill(u,b1,b2,&b);
   break;
   case 3:
   dis_bill(&u,&b);
   break;
   case 4:
   printf("\nThank you for using the system\n");
   break;
   default:
   printf("\nWe didn't the servive yet\n");
   break;
  }
 }while(c!=4);
getch();
}

void enter_units(unsigned int *u)
{
 printf("Enter the No. of units consumed : ");
 scanf("%u",u);
}

void cal_bill(unsigned int u,double b1,double b2,double *b)
{
 *b=0;
 if(u==0)
 {
  printf("\nNo.of Units has been not entered yet!\n");
 }
 else if(u>0 && u<=100)
 {
  *b = u * 1.50;
  printf("Bill has been calculated sucessfully\n");
 }
 else if(u>100 && u<=200)
 {
  b1 = 100 * 1.50;
  *b = b1 + ((u-100) * 2.50);
  printf("Bill has been calculated sucessfully\n");
 }
 else if(u>200)
 {
  b1 = 100 * 1.50;
  b2 = 100 * 2.50;
  *b = b1 + b2 + ((u-200) * 4.00);
  printf("Bill has been calculated sucessfully\n");
 }
}

void dis_bill(unsigned int *u,double *b)
{
 if(*u==0 || *b==0)
 {
  printf("\nNo. of units not entered (or) Bill was not calculated yet!\n");
 }
 else
 {
  printf("Total bill for %u units : %.2lf\n",*u,*b);
  *u=0;
  *b=0;
 }
}
