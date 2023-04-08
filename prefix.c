#include<stdio.h>
#include<string.h>
int pri(int ch)
{
if(ch=='+'||ch=='-')
return 1;
if(ch=='*'||ch=='/')
return 2;
if(ch=='^')
return 3;

else{
return 0;
}

}
char rev(char in[100],char t[100])
{
int len=strlen(in),i=0,j;
j=len-1;
while(j>=0)
{
if(in[j]='(')
t[i]=')';
if(in[j]=')')
t[i]='(';
t[i]=in[j];
i++;
j--;
t[i]='\0';
}
}

void main()
{
char s[50],in[50],c,ch,p[50],t[50],pr[50];
int i,k=0,top=-1;
printf("enter infix expression");
scanf("%s",t);
rev(t,in);
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
while(c!='(')
{
p[k++]=c;
c=s[top--];
}
}
else
{
while(pri(ch)<=pri(s[top])&&top!=-1){
p[k++]=s[top--];
}
s[++top]=ch;
}
}
p[k]='\0';
rev(p,pr);
printf("\nprefix expression %s",pr);
}



