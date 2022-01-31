int a[20],pos,element,n=0;
void create();
void insert();
void delet();
void traversal();
void search();

void main()
{
int choice;
while(1)
{
printf("\n MENU");
printf("\n 1. CREATE 2.INSERT 3.DELETE 4.TRAVERSAL 5. SEARCH 6. EXIT\n");
printf("\n Enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:create();
        break;
case 2:insert();
        break;
case 3:delet();
        break;
 case 4:traversal();
        break;
case 5:search();
        break;
 case 6:exit(0);
        break;
default:printf("\n INVALID OPERATION");
        break;
}
}
}
void create()
{
    int i;
printf("enter the numbers of elements you want to entered\n");
scanf("%d",&n);
printf("enter the elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
}

void insert()
{
    int i;

     do
    {

printf("enter the position to insert\n");
scanf("%d",&pos);
     }

 while(pos>=n);
 printf("enter the value to be inserted:\n");
 scanf("%d",&element);
 for(i=n-1;i>=pos;i--)
    a[i+1]=a[i];
 a[pos]=element;
 n=n+1;

 if(n==0)
printf("no elements in this array\n");
for(i=0;i<n;i++)
printf("\n element are:%3d",a[i]);
 }

 void delet()
 {
     int i;
  if(n==0)
    printf("array is empty:\n");
    do
    {
     printf("enter the position to delete:\n");
     scanf("%d",&pos);
    }
    while(pos>=n);
    element=a[pos];
    printf("element is deleted\n");
    for(i=pos;i<=n-1;i++)
    a[i]=a[i+1];
    n=n-1;
  if(n==0)
printf("no elements in this array\n");
for(i=0;i<n;i++)
printf("\n element are:%3d",a[i]);
 }

 void traversal()
 {
     int i;
  for(i=0;i<n;i++)
    printf("\n traversing elements are: %3d \n",a[i]);
 }

 void search()
 {
 int i,search,element;
 printf("enter the element you want to search:\n");
  scanf("%d",&search);
  element=0;
  for(i=0;i<n;i++)
  {
   if(a[i]==search)
   {
       element=1;
       break;
   }
  }
  if(element==1)
  {
   printf("%d item found at position %d",search,i+1);
  }
  else
  {
      printf("%d not found in this array\n",search);
  }
 }

