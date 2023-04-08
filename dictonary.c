

#include<stdio.h>
//#include<conio.h>
struct node{
int key;
char a[50];
struct node*next;
}*head;
int main()
{
int n,choose;
printf("enter no of elements u want to enter");
scanf("%d",&n);
create(n);
display();
printf("enter u r choice");
scanf("%d",&choose);
switch(choose)

{
case 1:delnode(n);
        display();
        break;
case 2:search();
       break;
}
}
int create(int n)
{
int i;
struct node*c,*temp;
c=(struct node*)malloc(sizeof(struct node));
printf("enter the key");
scanf("%d",&c->key);
printf("enter name");
scanf("%s",c->a);
c->next=NULL;
head=c;
temp=head;
for(i=1;i<n;i++)
{
c=(struct node*)malloc(sizeof(struct node));
printf("enter the key");
scanf("%d",&c->key);
printf("enter name");
scanf("%s",c->a);
c->next=NULL;
temp->next=c;
temp=temp->next;
}
}
int display()
{
struct node*temp;
temp=head;
while(temp!=NULL)
{
printf("%d:%s",temp->key,temp->a);
temp=temp->next;
}
}

int delnode(int n)
{
int x,i;
struct node*temp,*temp1;
printf("enter the key u want to delete");
scanf("%d",&x);
temp=head;
temp1=head;
while(temp!=NULL)
{
if(temp->key==x)
{
temp1->next=temp->next;
temp->next=NULL;
free(temp);
}
temp1=temp;
temp=temp->next;
}
return 0;
}


int search()
{
int x;
struct node*temp;
temp=head;
printf("enter the element to be searched");
scanf("%d",&x);
while(temp!=NULL)
{
if(temp->key==x)
{
printf("%d:%s",temp->key,temp->a);
temp=temp->next;
}
}
}

