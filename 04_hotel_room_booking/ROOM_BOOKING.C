#include<stdio.h>
#include<conio.h>

void main()
{
 int R[20] = {0,0,1,0,1,1,1,1,1,0,0,1,0,0,0,1,0,1,1,0};
 int choice,b,i,c=0;
 char r;
 int booked=0;
 for(i=0;i<=19;i++)
 {
  if(R[i]==1)
  {
  booked++;
  }
 }
 clrscr();
 do
 {
  printf("\n**HOTEL ROOM BOOKING**\n");
  printf("1)Book Room\n2)Cancel Room\n3)Available Rooms\n4)Room Status\n5)Exit\n");
  printf("\nWhat's your need : ");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:
   printf("\nYou have selected for Booking the room\n");
   if(booked==20)
   {
    printf("\nSorry, all rooms were already booked! You can,t book the room\n");
    break;
   }
   do
   {
   printf("Enter the Room no. you need to book(0 - 19) : ");
   scanf("%d",&b);
   if(b<0 || b>=20)
   {
    printf("\nInvalid room no. choose between (0 - 19)\n");
   }
   else if(R[b]==1)
   {
    printf("\nRoom %d has already booked, please check for other rooms\n",b);
   }
   else
   {
    R[b]=1;
    booked++;
    printf("\nRoom %d has been booked sucessfully\n",b);
   }
   if(booked==20)
   {
    printf("\nHotel is now fully booked\n");
    break;
   }
   printf("Do you need to book another room(y/n) : ");
   fflush(stdin);
   scanf("%c",&r);
   printf("\n");
   }while(r=='y' || r=='Y');
   break;

   case 2:
   printf("\nYou have selected for Cancelling the room\n");
   if(booked==0)
   {
    printf("\nNo rooms has been booked to Cancel\n");
    break;
   }
   do
   {
   printf("Enter the Room no. you need to cancel(0 - 19) : ");
   scanf("%d",&b);
   if(b<0 || b>=20)
   {
    printf("\nInvalid room no.! Choose between (0 - 19)\n");
   }
   else if(R[b]==0)
   {
    printf("\nRoom %d has not booked yet!\n",b);
   }
   else
   {
    R[b]=0;
    booked--;
    printf("\nRoom %d has been cancelled sucessfully\n",b);
   }
   if(booked==0)
   {
    printf("\nNo rooms have left to Cancel\n");
    break;
   }
   printf("Do you need to cancel another room(y/n) : ");
   fflush(stdin);
   scanf("%c",&r);
   printf("\n");
   }while(r=='y' || r=='Y');
   break;

   case 3:
   printf("\nYou have selected to check the Available Rooms\n");
   if(booked==20)
   {
    printf("\nRooms Available to Book : ---- ");
    printf("\nNo. of Rooms available : 0\n");
    break;
   }
   printf("\nRooms Available to Book : ");
   for(i=0;i<=19;i++)
   {
   if(R[i]==0)
   {
    printf("%d  ",i);
    c++;
   }
   }
   printf("\n\nNo. of Rooms available : %d",c);
   printf("\n");
   c=0;
   break;

   case 4:
   printf("\nYou have selected to check the Room status\n");
   if(booked==20)
   {
    printf("\nAll rooms are booked\n");
   }
   else if(booked==0)
   {
    printf("\nNo rooms have been booked yet\n");
   }
   else
   {
   printf("\nBooked rooms : ");
   for(i=0;i<=19;i++)
   {
   if(R[i]==1)
   {
    printf("%d  ",i);
    c++;
   }
   }
   printf("\nNo. of Booked rooms : %d",c);
   printf("\n");
   c=0;
   printf("\nNon Booked rooms : ");
   for(i=0;i<=19;i++)
   {
   if(R[i]==0)
   {
    printf("%d  ",i);
    c++;
   }
   }
   printf("\nNo. of Non Booked rooms : %d",c);
   printf("\n");
   c=0;
   }
   break;

   case 5:
   printf("\n--Thank you using our system--");
   break;

   default:
   printf("\nWe didn't implemented this system yet or invalid choice!\n");
   break;
  }
 }while(choice!=5);
getch();
}
