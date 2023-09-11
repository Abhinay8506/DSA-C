#include <stdio.h>
int quickpivot(int* arr,int s,int e)
{
    int i=s;
    int j=e;
    int pivotindex=s;
    while(i<=j && i<=e)
    {
        while(arr[i]<=arr[pivotindex])
        {
            i++;
        }
        while(arr[j]>arr[pivotindex]){
            j--;
        }
        if(i<j)
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
    }
   
    int temp=arr[j];
    arr[j]=arr[pivotindex];
    arr[pivotindex]=temp;
    return j;

}
void quicksort(int* arr,int s,int e){
    if(s>=e){
        return;
    }
    int  pivot=quickpivot(arr,s,e);
    quicksort(arr,s,pivot-1);
    quicksort(arr,pivot+1,e);
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
