#include<stdio.h>
#include<stdlib.h>
void main()
{
 int i,sum=0,n,num,ans,a[100];
 printf("Enter the number of players:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 a[i]=i;
   while(1)
 {
 for(i=1;i<=n;i++)
 {
 if(a[i]==0)
 continue;
  printf("Player %d:Enter the number between 1-10:",i);
  scanf("%d",&num);
  if(num==0 || num>10)
  {
   printf("Invalid number.Enter a valid number:");
   scanf("%d",&num);
  } 
  sum=sum+num;
  printf("Total=%d\n",sum);
  if(sum>=10)
  {
   printf("Player %d is eliminated\n",i);
   sum=0;
   a[i]=0;
   i=0;
  }
 }
 }
  if(a[i]!=0)
  {
  printf("Player %d won!",i);
  exit(0);  
}
}
}

