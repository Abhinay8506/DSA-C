#include <stdio.h>
int linearsearch(int*arr,int n,int item,int i){
    if(i>n-1)
    {
        return -1;
    }
    if(arr[i]==item){
        return i;
    }
    return linearsearch(arr,n,item,i+1);
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int item;
    scanf("%d",&item);
    printf("%d\n",linearsearch(arr,n,item,0));

    return 0;
}
