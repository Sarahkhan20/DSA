#include <stdio.h>
#define size 5
struct queue{
    int front,rear;
    int arr[size];
}q1;

void enqueue(int x){
  if(q1.rear==size-1 
  && q1.front==-1){
      printf("\n NAHI JAGAH HAI\n");
  }
  q1.rear++;
q1.arr[q1.rear]=x;


}
int dequeue(){
     int s;
     if(q1.rear==q1.front){
        printf("BOHOT JAGAH HAI");
    } 
   s= q1.arr[q1.front];
   q1.front++;
 printf("value popped out is :%d \n", s);
}
void peek(){
      if(q1.rear==q1.front){
        printf("BOHOT JAGAH HAI\n");
    }
    int s=q1.arr[q1.rear];
    printf("value at the top is : %d\n",s);
}
void display(){
      if(q1.rear==q1.front){
        printf("BOHOT JAGAH HAI");
    }
    for(int i=q1.rear;i>=0;i--)
    {
        printf("%d\n",q1.arr[i]);
    }
}
int main(){
 q1.rear=-1;
 q1.front=-1;
int choice,x,s;
do{
     printf("Options are 1.Enqueue 2.Dequeue 3.Display 4.peek 5.exit \n Enter the choice \n");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
        printf("Enqueue operation is selected\n");
        printf("Enter the element to Enqueue:");
        scanf("%d",&x);
        enqueue(x);
        break;

        case 2:
        printf("Dequeue operation is selected\n");
        dequeue(s);
        break;

        case 3:
        printf("display operation is selected\n");
        display(s);
        break;

        case 4:
        printf("peek operation is selected\n");
        peek(s);
        break;

        case 5:
        printf("THANK YOU\n");
        break;
    
        default:
        printf("invalid option\n");
        break;
    }
 }while(choice!=5);

    return 0;
}
