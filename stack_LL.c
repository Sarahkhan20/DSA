#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* top = NULL;

struct Node* push(struct Node* top, int val){
    struct Node *new=(struct Node*)malloc(sizeof(struct Node));
    new->data=val;
    new->next=top;
    top=new;
    return top;
}

int pop(struct Node *tp){
    if(top==NULL){
        printf("\n STACK UNDERFLOW\n");
    }
    else{
    struct Node* n=tp;
    top=tp->next;
    int x=n->data;
    free(n);
    return x;
    }
}
void display(struct Node *hptr){
    if(top==NULL){
        printf("\n STACK UNDERFLOW\n");
    }
    else{
        while(hptr!=NULL){
            printf("%d \t",hptr->data);
            hptr=hptr->next;
        }
    }
}
void peek(struct Node* top){
    if(top==NULL){
        printf("\n STACK UNDERFLOW");
    }
    else{
    printf("value at the top is:%d ",top->data);
    }
}


int main(){
   int val,choice,element;
    do{
        printf("\nChoose one of the options :\n 1.Push \t 2.Pop \t 3.Display \t 4.Peek \t 5.Exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("Enter the value to insert:");
            scanf("%d",&val);
           top= push(top,val);
           break;
             case 2:
             element=pop(top);
             printf("Popped element is: %d\n", element);
              break;
              case 3:
              printf("Elements in the stack are: ");
              display(top);
              break;
               case 4:
               peek(top);
               break;
                case 5:
                printf("\n THANK YOU! \n");
        }
    }while(choice!=5);
    return 0;
}










