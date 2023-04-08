#include<stdio.h>
int heap[40];
int size=-1;

int main()
{
int choose;
while(1)
{
printf("enter your choice");
scanf("%d",&choose);
switch(choose)
{
case 1:insert();
       break;
case 2:removemax();
       break;
case 3:display();
       break;
case 4:exit(0);
       break;

}
}
}

int insert()
{
int p;
printf("enter element");
scanf("%d",&p);
size=size+1;
heap[size]=p;
moveup(size);
}
int moveup(int i)
{
printf("%d",parent(i));
while(i>0)
{
if(heap[parent(i)]<heap[i])
{

int temp;
temp=heap[parent(i)];
heap[parent(i)]=heap[i];

heap[i]=temp;
}
i=i/2;
}
}

int parent(int i)
{
return (i-1)/2;
}
int lf(int i)
{
return i+1;
}
int rf(int i)
{
return i+2;
}
int display()
{
printf("elements in queue is:");
for(int i=0;i<=size;i++)
{
printf("%d",heap[i]);
}
}
/*
void delete(int i)
{
heap

//heap[i]=heap[0]+1;
moveup(i);
removemax();
}*/

int removemax()
{
int r=heap[0];
heap[0]=heap[size];
size=size-1;
movedown(0);
}
int movedown(int k)
{
int index=k;
int left=lf(k);
if(left<=size&&heap[left]>heap[index])
{
index=left;
}
int right=rf(k);
if(right<=size&&heap[right]>heap[index])
{
index=right;
}
if(k!=index)
{
int temp;
temp=heap[index];
heap[index]=heap[k];
heap[k]=temp;
movedown(index);
}
}













