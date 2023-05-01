#include <stdio.h> 
#include<stdlib.h>
int *fun(){  
    int y=10;  
    return &y;  
}  
int main()  
{  
   int *ptr=(int *)malloc(sizeof(int));  
   int a=560;  
   ptr=&a;  
   free(ptr);
   char *str;  
    {  
        char a = 'A';  
        str = &a;  
    }  
    // a falls out of scope   
    // str is now a dangling pointer   
    printf("%s", *str);
    int *p=fun();  
    printf("%d", *p);  

   return 0;  
}  