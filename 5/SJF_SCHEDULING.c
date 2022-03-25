#include<stdio.h>
#include<stdlib.h>
typedef struct
{
int pid;
int btime;
int wtime;
}
sp;
int main()
{
int i,j,n,tbm=0,towtwtime=0,totttime;
sp*p,t;
printf("\n sjf schaduling ..\n");
printf("enter the no of processor");
scanf("%d",&n);
p=(sp*)malloc(sizeof(sp));
printf("\n enter the burst time");
for(i=0;i<n;i++)
{
printf("\n process %d\t",i+1);
scanf("%d",&p[i].btime);
p[i].pid=i+1;
p[i].wtime=0;
}
for(i=0;i<n;i++)
for(j=j+1,j<n;j++;)
{
if(p[i].btime>p[j].btime)
{
t=p[i];
p[i]=p[j];
p[j]=t;
}}
printf("\n process scheduling\n");
printf("\n process \tburst time \t ");
for(i=0;i<n;i++)
{
towtwtime+=p[i].wtime=tbm;
tbm+=p[i].btime;
printf("\n%d\t\t%d",p[i].pid,p[i].btime);
printf("\t\t%d\t\t%d",p[i].wtime,p[i]);
}
totttime=tbm+towtwtime;
printf("\n total waiting time :%d", towtwtime );
printf("\n average waiting time :%f",(float)towtwtime/n);
printf("\n total turn around time :%d",totttime);
printf("\n average turn around time: :%f",(float)totttime/n);
}
