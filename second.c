#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
  int data;
  struct node *next;
};
static int c=0;
struct node * create()
{
  struct node *temp,*start=NULL,*q,*p,*r,*t;
while(1)
{
char str1[10];
printf("\n Enter yes or no\n");
scanf("%s",str1);
if(strcmp(str1,"no")==0)
break;
else
{
temp=(struct node *)malloc(sizeof(struct node));
printf("Enter a value ");
scanf("%d",&temp->data);
  temp->next=NULL;
  if(start==NULL)
  {
    start=temp;
    p=temp;
    q=temp;
  }
  else
  {
    p->next=temp;
    p=temp;
  }
}
}
return q;
}
struct node *reverse(struct node * p)
{
  struct node *prev=NULL,*NEXT=NULL,*r=p,*q,*s=p;
int k;
while(p->next!=NULL)
{
  c++;
  p=p->next;
}
printf("\n Enter the value of k ");
scanf("%d",&k);
  for(int i=1;i<k;i++)
  {
    r=r->next;
  }
  q=r;
  struct node *curr=r->next;
  r->next=NULL;
for(int i=k+1;k<=c;k++)
{
    NEXT=curr->next;
    curr->next=prev;
    prev=curr;
    curr=NEXT;
}

r->next=p;
return s;
}
void display(struct node * p)
{
  while(p!=NULL)
  {
    printf("%d\n",p->data);
  p=p->next;
  }
}
int main()
{

struct node *p,*q;
p=create();
q=reverse(p);
display(q);
}
