#include<stdio.h>
#define max 20
int top=-1;
void push(int []);
void pop(int []);
void display(int []);
int main(){
    int stack[max];
    int ch;
    
    do{
    printf("Choose\n 1.To push\n2.To pop\n3.To display\n4.For top position\n5.To exit\n");
    printf("Enter choice:");
    scanf("%d",&ch);
    switch(ch){
        case 1:
            push(stack);
            break;
             
        case 2:
            pop(stack);
            break;
        case 3:
             display(stack);
             break;

        case 4:
            printf("%d\n",top);
        default:
              printf("invalid choice\n");
              break;
    }
    }while(ch!=5);
    return 0;
}
void push(int a[]){
    int ele;
    if(top<max-1){
    printf("enter element for insertion:");
    scanf("%d",&ele);
    a[++top]=ele;
    printf("element inserted\n");
    }
    else{
        printf("\noverflow\n");
    }
    
}
void pop(int a[]){
    if(top>=0){
        top--;
    }
    else{
        printf("\nunderflow\n");
    }

}
void display(int a[]){
    printf("[");
    for(int k=0;k<=top;k++){

        printf("%d ",a[k]);
    }
    printf("]\n");
}
