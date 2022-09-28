//array implementation of queue
#include <stdio.h>
#define max 50
void enqueue();
void dequeue();
void display();
int queue_array[max];
int rear=-1;
int front=-1;
void main()
{ int choice;
    while(choice!=4){
        printf("1.Insert element in queue \n");
        printf("2.Delete element from queue \n");
        printf("3.Display  queue \n");
        printf("4.Exit \n");
    
    printf("Enter your choice \n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        enqueue();
        break;
        
        
        case 2:
        dequeue();
        break;
        
        case 3:
        display();
        break;
        
        case 4:
        printf("Thank you! \n");
        break;
        
        default:
        printf("Please choose one of the above choices \n");
    }
}

}
void enqueue()
{
    int add_item;
    if(rear==max-1)
    {
        printf("queue overflow \n");
        return;
    }
    
    else
    {
        if (front==-1)
        front=0;
        printf("Enter an element in queue\n");
        scanf("%d",&add_item);
        rear+=1;
        queue_array[rear]=add_item;
    }
}

void dequeue()
{
    if(front==-1 || front>rear)
    {
        printf("queue underflow \n");
        return;
    }
    else
    {
     printf("Element deleted from queue:%d \n ",queue_array[front]);
     front+=1;
     
    }
}

void display()
{
    if(front==-1)
    {
        printf("Queue is empty \n");
    }
    else
    {
        printf("queue is : \n");
        for(int i=front;i<=rear;i++)
        {
            printf("%d \n",queue_array[i]);
        }
    }
}
