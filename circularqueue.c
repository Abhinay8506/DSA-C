#include<stdio.h>
#define max 4
int front=-1;
int rear=-1;
void enqueue(int []);
void dequeue(int []);
void display(int []);
int main(){
    int cqueue[max];
    int ch;

    do{
    printf("\nChoose\n1.To ene\n2.To deueue\n3.To display\n4.For front position\n5.For rear position\n6.To exit\n");
    printf("Enter choice:");
    scanf("%d",&ch);
    switch(ch){
        case 1:
            enqueue(cqueue);
            break;
             
        case 2:
            dequeue(cqueue);
            break;
        case 3:
             display(cqueue);
             break;

        case 4:
            printf("%d\n",front);
            break;
        case 5:
            printf("%d\n",rear);
            break;
        default:
              printf("invalid choice");
              break;
    }
    }while(ch!=6);
    return 0;
    
}
void enqueue(int a[]){
    int item;
    if(front==((rear+1)%max)){
        printf("\nOverflow\n");
    }
    else{
        printf("Enter element to insert:");
        scanf("%d",&item);
        if(front==-1||rear==-1){
            front=(front+1)%max;
            rear=(rear+1)%max;
            a[rear]=item;
        }
        else{
            rear=(rear+1)%max;
            a[rear]=item;
        }
        printf("\nElement enqueued\n");
    }
}
void dequeue(int a[]){
    if(front==-1||rear==-1){
        printf("\nUnderflow\n");
    }
    else{
        if(front==rear){
            printf("Deleted element:%d\n",a[front]);
            front=rear=-1;
        }
        else{
            printf("Deleted element:%d\n",a[front]);
            front=(front+1)%max;
        }
    }
}
void display(int a[]){
    if(front==-1||rear==-1){
        printf("Queue is empty");
    }
    else{
    printf("[");
  
    for(int i=front;i!=rear;i=(i+1)%max){
        printf("%d ",a[i]);
    }
    printf("%d",a[rear]);
    
    printf("]");
    }
}

