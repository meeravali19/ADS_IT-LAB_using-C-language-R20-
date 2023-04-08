#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
int pri;
struct node*next;
}node;

struct node*front=NULL;

void main()
{
int n,choice,x;
printf("\nenter 1 to insert elements ");
printf("\nenter 2 to delete elements");
printf("\n enter 3 to show elements");
printf("\nexit...");
//create();
while(1)
{
printf("\nenter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("enter element to insert");
        scanf("%d",&n);
       printf("enter priority");
        scanf("%d",&x);
        insert(n,x);
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

void insert(int n,int x)
{
 struct node *temp,*q;
 temp=(struct node*)malloc(sizeof(struct node));
 temp->data=n;
 temp->pri=x;
 if(front==NULL|| x<front->pri)
{
temp->next=front;
front=temp;
}
else
{
q=front;
while(q->next!=NULL&&q->next->pri<=x)
    q=q->next;
temp->next=q->next;
q->next=temp;
}
}

int display()
{
   struct node*ptr;
   ptr=front;
   if(front==NULL)
   printf("queue is empty");
  else
{
printf("queue is :\n");
while(ptr!=NULL)
{
printf("%d    %d\n",ptr->pri,ptr->data);
ptr=ptr->next;
}
}
}

int delete()
{
struct node*temp;
if(front==NULL)
printf("queue is empty");
else
{
temp=front;
printf("deleted item is%d\n",temp->data);
front=front->next;
free(temp);
}
}














