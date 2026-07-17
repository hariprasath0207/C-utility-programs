#include<stdio.h>
#include<conio.h>

void balance(double*);
void widthdraw(double*);
void deposit(double*);
void transfer(double*, double*, int*);

void main()
{
 int p, c1 = 0, c2 = 0;
 int pass[2] = {1234, 5678};
 double a[2] = {10000.00, 20000.00};
 clrscr();
 while(c1 < 3)
 {
  printf("\n----SELECT THE ACCOUNT----\n1.P1\n2.P2\n3.Exit");
  printf("\n\nSelect your option:");
  scanf("%d", &c1);
  if(c1 == 1 || c1 == 2)
  {
   printf("\nEnter the password:");
   scanf("%d", &p);
   if(p == pass[c1-1])
   {
    c2 = 0;
    while(c2 < 5)
    {
     printf("\n---MENU---\n1.Balance\n2.Widthdraw\n3.Deposit\n4.Transfer\n5.Exit");
     printf("\n\nChoose your choice:");
     scanf("%d", &c2);
     switch(c2)
     {
      case 1:
       balance(&a[c1-1]);
       break;
      case 2:
       widthdraw(&a[c1-1]);
       break;
      case 3:
       deposit(&a[c1-1]);
       break;
      case 4:
       transfer(&a[0], &a[1], &c1);
       break;
      case 5:
       printf("\nExiting....\n");
       break;
      default:
       printf("\nENTER THE PROPER OPTION");
       break;
       }
      }
     }
     else
     {
      printf("\n***Password incorrect***");
     }
    }
    if(c1 == 3) printf("\n***Exiting***\n");
    }
    getch();
}

void balance(double *a)
{
 printf("\nAvailable balance = %.2f Rs\n", *a);
}

void widthdraw(double *a)
{
 double n;
 printf("\nEnter the amount you need to withdraw:");
 scanf("%lf", &n);
 if(n <= *a)
 {
  *a -= n;
  printf("\nWithdraw amount = %.2f Rs\nCurrent balance = %.2f Rs\n", n, *a);
 }
 else
 {
  printf("\nInsufficient balance amount\nAvailable balance = %.2f Rs\n", *a);
 }
}

void deposit(double *a)
{
 double n;
 printf("\nEnter the amount you want to deposit in your account:");
 scanf("%lf", &n);
 *a += n;
 printf("\nDeposited amount = %.2f Rs\nCurrent balance = %.2f Rs\n", n, *a);
}

void transfer(double *a, double *b, int *c)
{
 double n;
 printf("\nEnter the amount you want to transfer to another account:");
 scanf("%lf", &n);
 if(*c == 1)
 {
 if(n <= *a)
 {
  *a -= n;
  *b += n;
  printf("\nTransferred amount = %.2f Rs\nCurrent balance = %.2f Rs\n", n, *a);
 }
 else
 {
 printf("\nInsufficient balance amount\nAvailable balance = %.2f Rs\n", *a);
 }
 }
 if(*c == 2)
 {
 if(n <= *b)
 {
  *b -= n;
  *a += n;
  printf("\nTransferred amount = %.2f Rs\nCurrent balance = %.2f Rs\n", n, *b);
 }
 else
 {
  printf("\nInsufficient balance amount\nAvailable balance = %.2f Rs\n", *b);
 }
 }
}
