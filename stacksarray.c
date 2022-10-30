#include <stdio.h>
#define size 5
struct stack{
    int top;
    int arr[size];
}s1;

void push(int x){
  if(s1.top==size-1){
      printf("\n NAHI JAGAH HAI\n");
  }
  s1.top++;
s1.arr[s1.top]=x;

// printf("%d\n",s1.arr[s1.top]);

}
int pop(){
     int s;
     if(s1.top==-1){
        printf("BOHOT JAGAH HAI");
    } 
   s= s1.arr[s1.top];
   s1.top--;
 printf("value popped out is :%d \n", s);
}
void peek(){
      if(s1.top==-1){
        printf("BOHOT JAGAH HAI\n");
    }
    int s=s1.arr[s1.top];
    printf("value at the top is : %d\n",s);
}
void display(){
      if(s1.top==-1){
        printf("stack is empty");
    }
    for(int i=s1.top;i>=0;i--)
    {
        printf("%d\n",s1.arr[i]);
    }
}
int main(){
 s1.top=-1;
int choice,x,s;
do{
     printf("Options are 1.push 2.pop 3.display 4.peak 5.exit \n Enter the choice \n");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
        printf("Push operation is selected\n");
        printf("Enter the element to push:");
        scanf("%d",&x);
        push(x);
        break;

        case 2:
        printf("Pop operation is selected\n");
        pop(s);
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
