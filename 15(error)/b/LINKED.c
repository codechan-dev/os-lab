#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
struct record
{
char empname[20];
int age;
float salary;
};
typedef struct record person
FILE *people;
void main()
{
person employee;
int I,n;
FILE *fp;
printf("How many records:");
scanf("%d",&n);
fp=fopen("PEOPLE.txt","w");
for(i=0;i<n;i++)
{
printf("Enter the employee information :%d(EmpName, Age,Salary):",i+1);
scanf("%s%d%f",employee.empname,&employee.age,& employee.salary);
fwrite(&employee.sizeof(employee,1,people);
}
fclose(fp);
int rec,result;
people=fopen("PEOPLE.txt","r");
printf("Which record do you want to read from file?");
scanf("%d",&rec);
while(rec>=0)
{
fseek(people,rec*sizeof(employee),SEEK_SET);
result=fread(&employee,sizeof(employee),1,people);
if(result==1)
{
printf("\n RECORD %d\n",rec);
printf("Given name:%s\n", employee.empname);
printf("Age:%d years\n",employee.age);
printf("Current salary:$ %8.2f\n\n",employee.salary);
}
else
printf( "\n RECORD %d not found !\n\n",rec);
printf("Which record do you want(0to3)");
scanf("%d"<&rec);
}
fclose(people);
getch();
}