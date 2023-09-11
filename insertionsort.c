#include <stdio.h>
void insertionsort(int*arr,int n){
    for(int i=0;i<n-1;i++){
        int j=i+1;
        while(j>0 && arr[j]<arr[j-1]){
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
    }
}

int main()
{ 
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    insertionsort(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    

    return 0;
}
