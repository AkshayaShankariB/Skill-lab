#include<stdio.h>
#include<stdlib.h>
void main()
{
 int a[10][10],j,i,total_time[10],team,sum=0;
 printf("Enter the no. of teams:");
 scanf("%d",&team);
 printf("Relay begins!\n");
 for(i=1;i<=team;i++)
 {
 for(j=1;j<=4;j++)
 {
  a[i][j]=rand()%3;
  printf("team %d:%d player took %d secs\n",i,j,a[i][j]);
  if(j==4)
  break;
  else
  printf("team %d:%d passed the batten to %d player\n",i,j,j+1);
 }
 printf("\n\n");
 }
 for(i=1;i<=team;i++)
{
 for(j=1;j<=4;j++)
 {
  sum=sum+a[i][j];
 }
 total_time[i]=sum;
 printf("Total time taken by team-%d is:%d secs\n",i,total_time[i]);
 sum=0;
}

}
