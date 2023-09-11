#include <stdio.h>
void merge(int *arr,int s,int e){
    int mid=s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int i=s;
    int j=mid+1;
    int ans[e-s+1];
    int k=0;
    while(i<=mid && j<=e){
        if(arr[i]<arr[j]){
           ans[k++]=arr[i++]; 
        }
        else
        {
            ans[k++]=arr[j++];
        }
    }
    while(i<=mid){
        ans[k++]=arr[i++];
    }
    while(j<=e){
        ans[k++]=arr[j++];
    }
    int p=0;
    for(int r=s;r<=e && p<k;p++,r++){
        arr[r]=ans[p];
    }
    
    
}



void mergesort(int*arr,int s,int e)
{
    if(s>=e){
        return;
    }
    int mid=s+(e-s)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,e);
}


int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
