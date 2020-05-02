#include<stdio.h>
#include<conio.h>
int main()
{
int m,d,s=0;
clrscr();
printf("Enter the month");
scanf("%d",&m);
printf("Enter the date");
scanf("%d",&d);
s=s+d;
if(m==1)
{
s+=0;
}
else
{  if(m==2)
   {
    s+=31;
   }
   else
   {   if(m==3)
       {
       s+=60;
       }
       else
       {
	  if(m==4)
	  {
	  s+=91;
	  }
	  else
	  {
	      if(m==5)
	      {
	      s+=121;
	      }
	      else
	      {
		if(m==6)
		{
		s+=152;
		}
		else
		{
		   if(m==7)
		   {
		   s+=182;
		   }
		   else
		   {
		      if(m==8)
		      {
		      s+=213;
		      }
		      else
		      {
			  if(m==9)
			  {
			  s+=244;
			  }
			  else
			  {
			      if(m==10)
			      {
			      s+=274;
			      }
			      else
			      {
				 if(m==11)
				 {
				 s+=305;
				 }
				 else
				 {
				     if(m==12)
				     {
				     s+=335;
				     }
				 }
			      }
			  }
		      }
		   }
		}
	      }
	  }
       }
   }
}

s=s%7;
switch(s)
{
case 0:
	printf("TUESDAY");
	break;
case 1:
	printf("WEDNESDAY");
	break;
case 2:
	printf("THURSDAY");
	break;
case 3:
	printf("FRIDAY");
	break;
case 4:
	printf("SATURDAY");
	break;
case 5:
	printf("SUNDAY");
	break;
case 6:
	printf("MONDAY");
	break;
default:
	printf("There is some error in the above program");
}
getch();
return 0;

}