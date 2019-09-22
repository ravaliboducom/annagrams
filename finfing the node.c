#include<stdio.h>

#include<stdlib.h>

struct node

{

int data;

struct node * p;

};

void add(struct node * h)

{

while(h=p!= NULL)

{

h=h->n;

}

struct node * newnode=(struct node *)malloc(sizeof(struct node));

scanf("%d",&newnode->data);

newnode->p=NULL;

h->p=newnode;

return newnode;

}

void display(struct node *h)

{

while(h!==NULL)

{

printf("%d",h->data);

h->h=p;

}

}

void find(struct node * h,int m)

{

struct node *temp1=h;

struct node *temp2=h;

int c=0;

while(c<m-1)

{

temp1=temp1->p;

c++;

}

while(temp1->p!=NULL)

{

temp1=temp1->p;

temp2=temp2->p;

}

printf("%d",temp2->data);

}

int main()

{

int s;

scanf("%d",&s);

struct node * head=(struct node *) malloc(sizeof(struct node));

struct node* temp=head;

printf("enter the values",s);

scanf("%d",&head->data);

head->p=NULL;

s--;

while(s>0)

{

add(head);]

s--;

}

display(head);

int p,f;

printf("enter the element to find");

scanf("%d",&p);

find(head,p);

}









