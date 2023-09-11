
#include <stdio.h>
int binarysearch(int*arr,int item,int l,int h){
    if(l>h){
        return -1;
    }
    int mid=l+(h-l)/2;
    if(arr[mid]==item){
        return mid;
    }
    else if(arr[mid]>item){
        h=mid-1;
        return binarysearch(arr,item,l,h);
    }
    else{
        l=mid+1;
        return binarysearch(arr,item,l,h);
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
    int item;
    scanf("%d",&item);
    printf("%d\n",binarysearch(arr,item,0,n-1));


    return 0;
}
