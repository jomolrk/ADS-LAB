
#include <stdio.h>

int main()
{
    
    int n1,n2,n3,i,j,a[n1],b[n2],c[n3];            
    printf("\nEnter the size of first array ");
    scanf("%d",&n1);
    printf("\nEnter the size of second array ");
    scanf("%d",&n2);
    
    n3=n1+n2;
    printf("\nEnter the first array elements");
    for(i=0;i<n1;i++)      
    {
       scanf("%d",&a[i]);
       c[i]=a[i];
    }
    int k=n1;
    
    printf("\nEnter the second array elements");
    for(i=0;i<n2;i++)      
    {
        scanf("%d",&b[i]);
        c[k]=b[i];
        k++;
        
    }
    
    
  
    
  printf ("merged the elements\n");
    for(i=0;i<n3;i++)
    printf("%d ",c[i]);       
    
    printf("\nAfter sorting the merged array:\n");
    for( i=0;i<n3;i++)         
    {
        int temp;
        for( j=i+1; j<n3 ;j++)
        {
            if(c[i]<c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }  
    for(i=0 ; i<n3 ; i++)       
    {
        printf("%d ",c[i]);
    }
}



