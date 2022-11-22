#include <stdio.h>
#include <stdlib.h>
#define SIZE 3

struct queue
{
    int items[SIZE];
    int front,rear;
}s;
void enqueue(int x){
    if(s.rear==SIZE-1){
        printf("queue is full\n");
       
    }

    s.rear++;
    s.items[s.rear]=x;

}

void dequeue(){
    if(s.rear==s.front){
        printf("Queue empty\n");
   
    }
    int a=s.items[s.front+1];
    printf("Removed element is :%d\n",a);

    for(int i = s.front+1; i < s.rear ; i++) {
            s.items[i] = s.items[i+1];
        }
    s.rear--;
}

void display(){
    if(s.rear==s.front){
        printf("queue empty\n");
        return;
    }
    printf("Queue is :\n");
    for(int i=s.front+1;i<=s.rear;i++){
        printf("Elements no %d is :%d\n",i,s.items[i]);
    }
}

int main()
{
    s.front=-1;
    s.rear=-1;
        enqueue(2);
         enqueue(4);
          enqueue(6);
        dequeue();
         enqueue(8);
         dequeue();
          enqueue(10);
        display();
    return 0;
}
