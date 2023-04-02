#include <stdio.h>
#include <math.h>
int setA[50];
int createsetA(int);
void printPowerSet(int *set, int set_size)
{
	/*set_size of power set of a set with set_size
	n is (2**n -1)*/
	unsigned int pow_set_size = pow(2, set_size);
	int counter, j;

	/*Run from counter 000..0 to 111..1*/
	for(counter = 0; counter < pow_set_size; counter++)
	{
	for(j = 0; j < set_size; j++)
	{
		/* Check if jth bit in the counter is set
			If set then print jth element from set */
		if(counter & (1<<j))
			printf("%d", set[j]);
	}
	printf("\n");
	}
}

/*Driver program to test printPowerSet*/
int main()
{   int n1,i=0,t;
    printf("enter no of elements for set:\n");
    scanf("%d",&n1);
    printf("enter elements for Set\n");
   if(n1!=0) 
   {
    do
    {  printf("enter element:");
       t=createsetA(i);
       if(t==1)
       {
         i++;
         
       }
       else
       {
         if(t==0)
           printf("duplicate element\n");
       }
    }while(i<n1);
   }
    printf("SET\n");
    for(i=0;i<n1;i++)
    {  
        printf("%d\n",setA[i]);
    }
	printPowerSet(setA, n1);
	return 0;
}

int createsetA(int i)
 {  int value,j,term=1,t;
    scanf("%d",&value);
    for(j=0;j<=i;j++)
    { 
        if(setA[j]==value)
           term=0;
    }  
    if(term==0)
       t=0;
    else
    {  setA[i]=value;
       t=1; 
    }
    return (t);


 }
