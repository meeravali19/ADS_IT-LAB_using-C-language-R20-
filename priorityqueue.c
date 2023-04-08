#include<stdio.h>
#include<stdlib.h>
#define max 10
int queue[max];
int front,rear;
 
void main()
{
int n,choice;
printf("\nenter 1 to insert elements ");
printf("\nenter 2 to delete elements");
printf("\n enter 3 to show elements");
printf("\nexit...");
create();
while(1)
{
printf("\nenter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("enter element to insert");
        scanf("%d",&n);
        insert(n);
       break;
case 2: delete();
          break;
case 3: display();
      break;
 case 4:exit(0);
default:printf("please enter valid choice");
}
}
}
void create()
{
front=rear=-1;
}
void insert(n)
{
if(rear>=max-1)
{

printf("\n queue overflow");
return;

}
if((front==-1)&&(rear==-1))
{
front++;
rear++;
queue[rear]=n;
return;
}
else
priority(n);
rear++;
}
void priority(int n)
{
int i,j;
for(i=0;i<=rear;i++)
{
if(n>=queue[i])
{
for(j=rear+1;j>i;j--)
{
queue[j]=queue[j-1];
}
queue[i]=n;
return;
}
}
queue[i]=n;
}
void display()
{
if((front==-1)&&(rear==-1))
{
printf("\nempty queue");
return;
}
for(;front<=rear;front++)
{
printf("%d\n",queue[front]);
}
front=0;
}
void delete()
{
int i;
if((front==-1)&&(rear==-1))
{
printf("\n empty queue");
}
for(i=0;i<=rear;i++)
{
queue[i]=queue[i+1];
}
rear--;
if(rear==-1)
front=-1;
}













