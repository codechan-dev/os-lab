#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int i=0,j=0,k=0,i1=0,m,n,rs[30],flag=1,p[30];
system("clear");
printf("FIFO page replacement algorithm....\\n");
printf("enter the no. of frames:");
scanf("%d",&n);
printf("enter the reference string:");
while(1)
{
scanf("%d",&rs[i]);
if(rs[i]==0)
break;
i++;
}
m=i;
for(j=0;j<n;j++)
p[j]=0;
for(i=0;i<m;i++)
{
flag=1;
for(j=0;j<n;j++)
if(p[j]==rs[i]) {
printf("data already in page....\n");
flag=0;
break; }
if(flag==1) {
p[i1]=rs[i];
i1++;
k++;
if(i1==n)
i1=0;
for(j=0;j<n;j++) {
printf("\n page %d:%d",j+1,p[j]);
if(p[j]==rs[i])
printf("*"); }
printf("\n\n");
}}
printf("total no page faults=%d",k); }