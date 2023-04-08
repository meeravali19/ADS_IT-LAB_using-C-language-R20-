#include<stdio.h>
//#include<conio.h>



int main()
{
int i,x,z,capacity,y;
printf("enter the caapcity of hashtable");
scanf("%d",&capacity);
int arr[capacity];
for(i=0;i<capacity;i++)
arr[i]=-1;
/*
printf("enter how many elements u want enter\n");
printf("no of elements must less or equal to capacity\n");
scanf("%d",&x);

for(i=0;i<x;i++)
{

 insert(arr);
}
z=insert(arr);
if(z==-1)
*/
y=capacity+capacity;
for(i=capacity;i<y;i++)
arr[i]=-1;


for(i=0;i<y;i++)
printf("%d:%d\n",i,arr[i]);
return 0;
}
/*
int insert(int arr[])
{
int key,index,size,n;
printf("enter the key ");
scanf("%d",&key);
size=key;

index=key % capacity;
while(arr[index]!=-1)
{
key++;
index=key%capacity;
if(capacity<index){
return -1;
capacity=2*capacity;
for(int i=index;i<capacity;i++)
arr[i]=-1;

}
}
if(arr[index]==-1)
arr[index]=size;

return 0;

}
*/


