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
        enqueue(2);
  enqueue(4);
    enqueue(6);
        dequeue();
  
        display();
  
        peek();
    
    return 0;
}
