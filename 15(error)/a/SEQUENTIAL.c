#include<stdio.h>
#include<conio.h>
typedef struct 
{int sno;
char name[25];int m1,m2,m3;
} STD,s;
int display(FILE *);
int search(FILE *);
void main()
{int i,n,sno_key,opn;
FILE *fp;
clrscr();
printf("How many records ?");
scanf("%d",&n);
fp=fopen("stud.dat","w");
for(i=0;i<n;i++)
{printf("Enter the student information : %d(sno,Name,M1,M2,M3):",i+1);
scanf("%d%s%d%d%d",&s.sno,s.name,&s.m1,&s.m2,&s.m3);
fwrite(&s,sizeof(s),1,fp);
}
fclose(fp);
fp=fopen("stdu.dat","r");
do
{
(*root)=(node*)malloc(sizeof(node));
printf("enter the name of dir file name %s",dname);
fflush(stdin);
gets((*root)->name);
if(lev==0 || lev==1)
(*root)-> ftype=1;
else
(*root)->ftype=2;
(*root)->level=lev;
(*root)->y=50+lev*50;
(*root)->x=x;
(*root)->lx=lx ;
(*root)->rx=rx;
for(i=0;i<5;i++)
(*root)->link[i]=NULL;
if((*root)->ftype==1)
{if(lev==0 || lev==1)
{if((*root)->level==0)
printf("how many users");
else
printf(" how many files");
printf("(for %s):",(*root)->name);
scanf("%d",&(*root)->nc);
}else
(*root)->nc=0;
if((*root)->nc==0)
gap=rx-lx;
else
gap=(rx-lx)/(*root)->nc;
for(i=0;i<(*root)->nc;i++)
create(&((*root)->link[i]),lev+1,(*root)->name,lx+gap*i,lx+gap*i+gap,lx+gap*i+gap/2);
}else
(*root)->nc=0;
}}
display(node *root)
{int i;
settextstyle(2,0,4);
settextjustify(1,1);
setfillstyle(1,BLUE);
setcolor(14);
if(root!=NULL)
{for(i=0;i<root->nc;i++)
{line(root->x,root->y,root->link[i]->x,root->link[i]->y);
}if(root->ftype==1)
bar3d(root->x-20, root->y-10,root->x+20,root->y+10,0,0);
else
fillellipse(root->x,root->y,20,20);
outtextxy(root->x,root->y,root->name);
for(i=0;i<root->nc;i++)
{display(root->link[i]);
}}}
