#include<stdio.h>
#define max 20
int front=-1;
int rear=-1;
void enqueue(int []);
void dequeue(int []);
void display(int []);
int main(){
    int queue[max];
    int ch;
    
    do{
    printf("Choose\n1.To enqueue\n2.To dequeue\n3.To display\n4.For front position\n5.For rear position\n6.To exit\n");
    printf("Enter choice:");
    scanf("%d",&ch);
    switch(ch){
        case 1:
            enqueue(queue);
            break;
             
        case 2:
            dequeue(queue);
            break;
        case 3:
             display(queue);
             break;

        case 4:
            printf("%d\n",front);
            break;
        case 5:
            printf("%d\n",rear);
            break;
        default:
              printf("invalid choice\n");
              break;
    }
    }while(ch!=6);
    return 0;
}
void enqueue(int a[]){
    int ele;
    if(rear==max-1){ 
        printf("\noverflow\n");
    }
    else{
    printf("enter element for insertion:");
    scanf("%d",&ele);
    if(front==-1||rear==-1){
       front=rear=0;}
    else{
        rear++;
    }
    a[rear]=ele;
    printf("element inserted\n");
    }
    
}
void dequeue(int a[]){
    if(front==-1||rear==-1){
        printf("\nunderflow\n");
    }
    else{
    if(front==rear){
        printf("element deleted:%d\n",a[front]);
        front=rear=-1;
    }
    else{
        printf("element deleted:%d\n",a[front++]);
    }
    }
}
void display(int a[]){
    if(front==-1||rear==-1){
        printf("empty queue\n");
    }
    else{
    printf("[");
    for(int k=front;k<=rear;k++){

        printf("%d ",a[k]);
    }
    printf("]\n");
    }
}
