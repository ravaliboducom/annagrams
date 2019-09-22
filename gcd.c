
 #include<stdio.h> 
int main() 
{
 int n,m,p,i; 
printf("enter the two numbers\n");
 scanf("%d%d",&n,&m); 
for(i=1;i<=n && i<=m;i++)
 { 
if(n%i==0 && m%i==0) 
{
 p=i; 
} 
} 
printf("gcd of %d and %d is %d",n,m,p); 
return 0; }