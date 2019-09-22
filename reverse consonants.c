

#include<stdio.h>

#include<stdlib.h>

int vowel(char c)

{

char vowels[10]={'a','i','e','o','u','A','E','I','O','U');

int i;

for(i=0;i<=10;i++)

{

if(vowel[i]==c)

return 1;

}

return 0;

}

int main()

{

int i,k=0;

char n[50],t[50]=" ",a[40]=" ";

printf("\n enter a string");

scanf("%d",n);

for(i=0;n[i]!="\0";i++)

{

if(!vowel(n[i]))

{

t[k]=n[i];

k--;

}

}

scanf("%s",n);

for(i=0;n[i]!='\0';i++)

{

if(!vowel(n[i]))

{

t[k]=n[i];

k++;

}

}

strrev(t);

k=0;

for(i=0;n[i]!="\0';i++)

{

if(vowel(n[i]))

{

a[i]=n[i];

}

else

{

a[i]=t[k];

k++;

}

}

printf("\n%s",a);

}