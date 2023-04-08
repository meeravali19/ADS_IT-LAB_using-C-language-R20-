#include<stdio.h>
int main()
{
int a,t=0;
int b[20][2000];
int z[20000];
int n1[50],n2=0;

printf("enter no of arrays");
scanf("%d",&a);
for(int i=0;i<a;i++)
{
  b[i][10000];
}
for(int i=0;i<a;i++){
printf("enter the size of array of a[%d]",i);
scanf("%d",&n1[i]);
for(int j=0;j<n1[i];j++)
{
printf("enter the elements");
scanf("%d",&b[i][j]);
}
}

printf("print the array");
for(int i=0;i<a;i++){
for(int j=0;j<n1[i];j++)
{
printf("%d",b[i][j]);
}
printf("\n");
}
for(int i=0;i<a;i++){
for(int j=0;j<n1[i];j++){
n2=n2+n1[i];
}
}
for(int i=0;i<a;i++)
{
for(int j=0;j<n1[i];j++)
{
int s=b[i][j];
int k=i+1;
//k1=i+2;
if(s>b[k][j])
{
//for( t=0;t<n2;t++)
z[t]=s;
t++;
}
else{z[t]=b[k][j];
t++;
}
}
}
for(int t=0;t<n2;t++)
printf(" %d",z[t]);


}

