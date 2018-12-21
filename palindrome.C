#include<stdio.h>
#include<conio.h>
void main()
{
 int n,s,rev=0,l;
 clrscr();
 printf("enter a value n: ");
 scanf("%d",&n);
 l=n;
 while(n!=0)

 {
  s=n%10;
  n=n/10;
  rev=(rev*10)+s;
}
  printf("%d",rev);
  if(rev==l)
  {
   printf("number is palintrome");
  }
  else
  {
   printf("number is not a palintrome");
  }


  getch();
}