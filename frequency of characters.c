#include<stdio.h>
 int main()
 { 
char str[100],p;
 int i,f=0;
 printf("enter the string"); 
gets(str); 
printf("enter the character"); 
scanf("%d",&p); 
for(i=0;str[i]!="\0";i++) 
{ 
if(p==str[i]) 
{
 f++;
} 
} 
printf("the frequency of the character %d is %d",p,f);
 return 0;
 }