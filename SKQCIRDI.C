#include<stdio.h>
struct node
{
 int d;
 struct node *n;
}*nn,*f,*r,*t;
int main()
{
 int n;
 clrscr();
 while(1)
 {
  printf("\n1.Enqueue.\n2.Dequeue.\n3.Display.\n4.Peek.\n5.Exit\nEnter Your Choise:");
  scanf("%d",&n);
  switch(n)
  {
   case 1:enq();
   break;
   case 2:deq();
   break;
   case 3:display();
   break;
   case 4:peek();
   break;
   case 5:exit(0);
   break;
   default:printf("Invalid Input\n");
  }
 }
}
int enq()
{
 nn=(struct node*)malloc(sizeof(struct node));
 printf("\nEnter data:");
 scanf("%d",&nn->d);
 nn->n=NULL;
 if(f==NULL&&r==NULL)
 {
   f=nn;
   r=nn;
   nn->n=f;
 }
 else
 {
 r->n=nn;
 nn->n=NULL;
 r=nn;
 nn->n=f;
 }
 return 0;
}

int deq()
{
t=f;
if(f==NULL&&r==NULL)
{
 printf("Queue is Empty.\n");
}
else if(f==r)
{
  printf("Dequeue element is %d.\n",f->d);
  f=r=NULL;
  free(t);
}
else
{
 printf("Dequeue element is %d.\n",f->d);
 f=f->n;
 r->n=f;
 free(t);
}
return 0;
}
int display()
{
 t=f;
 while(t->n!=f)
 {
  printf("%d\t",t->d);
  t=t->n;
 }
 printf("%d\n",t->d);
 return 0;
}
int peek()
{
 printf("first element is:%d",f->d);
 return 0;
}