#include<stdio.h>

#include<stdlib.h>

int main()

{

char s1[80],s2[80];

int l,l1,l2,i,j,f=0;nf=0;

printf("enter the string s1");

gets(s1);

printf("enter the string s2");

gets(s2);

l1=strlen(s1);

l2=strlen(s2);

if(l1==l2)

{

l=l1;

for(i=0;i<l;i++)

{

f=0;

for(j=0;j<l;j++)

{

if(s1[i]==s2[j])

{

f=1;

break;

}

}

if(f==0)

{

np=1;

break;

}

}

if(nf==1)

printf("\n strings are not anagrams");

else

printf("\n strings are anagrams");

else

{

printf("\n both strings must have same no of characters");

getch():

return 0;

}