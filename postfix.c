#include<stdio.h>
#include<string.h>
int priority(int ch)
{
if(ch=='+'||ch=='-')
{
return 1;
}
if(ch=='*'||ch=='/')
{
return 2;
}
if(ch=='^')
{
return 3;
}
else
{
return 0;
}
}
void main()
{
char p[100],in[100],ch,c,s[100];
int i,k=0,top=-1;
printf("enter infix expression");
scanf("%s",in);
s[++top]='(';
strcat(in,")");
for(i=0;in[i]!='\0';i++)
{
ch=in[i];
if(isalnum(ch))
p[k++]=ch;
else if(ch=='(')
s[++top]=ch;
else if(ch==')')
{
c=s[top--];
while(c!='('){
p[k++]=c;
c=s[top--];
}
}
else
{
while(priority(ch)<=priority(s[top])&&top!=-1)
{
p[k++]=s[top--];

}
s[++top]=ch;
}
}
p[k]='\0';
printf("\npostfix expression %s",p);
}
