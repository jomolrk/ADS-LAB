#include<stdio.h>

void push();
void pop();
void display();
void search();

int choice,value;
struct node
{
int data;
struct node *next;
}*top=NULL;
void main()
{
while(1)
{
printf("\n\n*******MENU************\n\n");
printf("\n1.insertion\n2.deletion\n3.display\n4.search \n5.exit\n");
printf("enter your choice");
scanf("%d",&choice);
switch(choice)
{
case 1:push();
       break;
case 2:pop();
       break;
case 3:display();
       break;
case 4:search();
       break;
case 5:exit(0);
       break;
default:printf("wrong selection");
        break;
}
}
}

void push()
{
struct node *newnode=malloc(sizeof(struct node));
printf("enter the value to be inserted\n");
scanf("%d",&value);
if(top==NULL)
{
 newnode->data=value;
newnode->next=NULL;
top=newnode;
}
else
{
 newnode->data=value;
newnode->next=top;
top=newnode;
printf("insertion success\n");
}
display();
}
void pop()
{
struct node *temp;
if(top==NULL)
{
    printf("stack is full.deletion is not possible\n");
}
else{
int i=temp->data;
temp=top;
printf("deleted element:%d\n",temp->data);
top=top->next;
free(temp);
display();
}
}

void display()
{
 if(top == NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        struct node *temp=top;
        printf("Stack elements are:\n");
        while(temp->next!=NULL)
        {
            printf("%d-->",temp->data);
            temp= temp->next;
        }
        printf("%d-->NULL",temp->data);
    }

}

void search()
{
  int i=0,search;
  printf("enter the value to be searched\n");
  scanf("%d",&search);
  struct node *temp = top;

    while(temp != NULL)
    {


        if(temp->data ==search)
        printf("%d item found at position %d",temp->data,i+1);
        temp = temp->next;
        i++;
    }
}
