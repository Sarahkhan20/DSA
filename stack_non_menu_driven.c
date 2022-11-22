#include <stdio.h>
#define size 3
struct stack {
    int top;
    int arr[size];
}s1;

void push(int x){
    if(s1.top==size-1){
        printf("\nSTACK OVERFLOW\n");
    }
    else{
        s1.top++;
        s1.arr[s1.top]=x;
    }
}

int pop(){
    if(s1.top==-1){
        printf("\nSTACK UNDERFLOW\n");
    }
    else{
        int s= s1.arr[s1.top];
        s1.top--;
        printf("\nElement popped out is %d\n",s);
    }
}
void peek(){
    if(s1.top==-1){
        printf("\nSTACK UNDERFLOW\n");
    }
    else{
        printf("\nElement at the top is : %d\n", s1.arr[s1.top]);
    }
    }


void display(){
    if(s1.top==-1){
        printf("\nSTACK UNDERFLOW\n");
    }
    else{
        printf("\nElements in the stack are:\n");
        for(int i=s1.top;i>=0;i--){
            printf("\n %d\n",s1.arr[i]);
        }
    }
}

int main(){
    s1.top=-1;
    push(2);
    push(4);
    push(6);
    pop();
    peek();
    display();
    return 0;
}
