#include<stdio.h>

#define max 10
void index_sequential(int[],int,int,int);
int main()
{
   int arr[max],n;
   int value,i,bs;
   printf("enter no. of  elements:");
   scanf("%d",&n);
   printf("enter elements for array\n");
   for(i=0;i<n;i++)
   {
     scanf("%d",&arr[i]);
   }
    printf("enter block size:");
   scanf("%d",&bs);
   printf("enter element to search:");
   scanf("%d",&value);
  
   index_sequential(arr,n,bs,value);
   printf("\nThank you\n");
   return 0;
}
void index_sequential(int a[],int n,int bs,int value)
{       int i,j,k=0;
        int index[max];
        int flag=0,start,end;
        
       for(i=0,j=0;i<n,j<n;i=i+bs,j++)
       {
         index[j]=i;
         k++;
       }
       j=0;
       if(a[0]>value)
          printf("not found");
       else{
          while(j<k)
          {
            if(a[index[j]]<value)
               j++;
            else{
                start=index[j-1];
                end=index[j];
                for(i=start;i<=end;i++)
                {
                    if(value==a[i])
                    { printf("found at:%d",i);
                      flag=1;
                      break;
                    }
                }
                
            }
            if(flag==1){
               break;
            }
            

            
          }
       }

       if(flag==0)
        {
           printf("not found");
        }
}
