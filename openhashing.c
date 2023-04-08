#include<stdio.h>
#include<stdlib.h>
#define size 10

struct node{
int data;
struct node *next;
};

struct node *chain[size];
void openhash()
{
//struct node *chain[size];
int i;
for(i=0;i<size;i++)
 chain[i]=NULL;

}

void insert(int a)
{

struct node *c;
c=(struct node*)malloc(sizeof(struct node));
c->data=a;
c->next=NULL;
int key =a % size;
if(chain[key]==NULL){
chain[key]=c;

}
else
{
struct node *temp=chain[key];
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=c;
}
}

void print()
{

int i;
for(i=0;i<size;i++)
{
struct node*temp=chain[i];
printf("chain[%d]-->",i);
while(temp!=NULL)
{
printf("%d-->",temp->data);
temp=temp->next;
}
printf("NULl\n");
}
}

int main()
{
openhash();
int i,a;
for(i=0;i<6;i++)
{
printf("enter number:");
scanf("%d",&a);
insert(a);
}
print();
}

