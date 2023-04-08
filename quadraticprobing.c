#include<stdio.h>
//#include<conio.h>
const int  capacity=10;


int main()
{
int i,x,arr[capacity];


for(i=0;i<capacity;i++)
arr[i]=-1;

printf("enter how many elements u want enter\n");
printf("no of elements must less or equal to capacity\n");
scanf("%d",&x);

for(i=0;i<x;i++)
{

 insert(arr);
}

for(i=0;i<capacity;i++)
printf("%d:%d\n",i,arr[i]);
return 0;
}

int insert(int arr[])
{
int key,index,size,n;
n=0;
printf("enter the key ");
scanf("%d",&key);
size=key;

index=key % capacity;
while(arr[index]!=-1)
{
key=key+n*n;
index=key%capacity;
n++;
}
if(arr[index]==-1)
arr[index]=size;
return 0;

}

