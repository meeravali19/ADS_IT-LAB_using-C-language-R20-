#include<stdio.h>
int heap[40];
int size=-1;

int main()
{
int choose;
printf("1.insert 2.display 3.lastdel 4.rootdel 5.exit\n");
while(1)
{
printf("enter your choice");
scanf("%d",&choose);
switch(choose)
{
case 1:insert();
        break;
case 2:display();
        break;
case 3:lastdel();
        break;
case 4:rootdel();
        break;
case 5:exit(0);
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
 

int display()
{
for(int i=0;i<=size;i++)
{
printf("%d\t",heap[i]);
}
}

int lastdel()
{
heap[size]=NULL;
size=size-1;
}

int rootdel()
{
int r=heap[0];
heap[0]=heap[size];
size=size-1;
movedown(0);
}
int movedown(int k)
{
int index=k;
int left=left_child(k);
if(left<=size && heap[left]>heap[index])
{
index=left;
}
int right= right_child(k);
if(right<=size && heap[right]>heap[index]){
index=right;
}
if(k!=index)
{
int temp;
temp=heap[index];
heap[index]=heap[k];
heap[k]=temp;
movedown(0);
}
}


int left_child(int i)
{
return i+1;

}

int right_child(int i)
{
return i+2;
}









