#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* front= NULL;
struct Node* rear= NULL;

struct Node* enqueue(int val){
    struct Node *new=(struct Node*)malloc(sizeof(struct Node));
    new->data=val;
    new->next=NULL;
    if(front==NULL){
        front=rear=new;
    }
    else{
       rear->next=new;  
       rear=new;
    }
}

int dequeue(){
    int x=-1;
    struct Node* n=front;
    if(front==rear){
        printf("\n QUEUE UNDERFLOW\n");
    }
    else{
    front=front->next;
    x=n->data;
    free(n);
    }
     return x;
}
void display(struct Node *hptr){
        while(hptr!=NULL){
            printf("%d \t",hptr->data);
            hptr=hptr->next;
        }
    }

void peek(struct Node* front){
    if(front==rear){
        printf("\n STACK UNDERFLOW");
    }
    else{
    printf("value at the top is:%d ",front->data);
    }
}


int main(){
   int val,choice,element;
    do{
        printf("\nChoose one of the options :\n 1.enqueue \t 2.dequeue \t 3.Display \t 4.Peek \t 5.Exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("Enter the value to insert:");
            scanf("%d",&val);
           rear= enqueue(val);
           break;
             case 2:
             element=dequeue(front);
             printf("Removed element is: %d\n", element);
              break;
              case 3:
              printf("Elements in the queue are: ");
              display(front);
              break;
               case 4:
               peek(front);
               break;
                case 5:
                printf("\n THANK YOU! \n");
        }
    }while(choice!=5);
    return 0;
}










