#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

void push(int value){
    if(top == MAX -1){
        printf("Stack overflow \n");
    }
    else{
        top++;
        stack[top]=value;
        printf("%d inserted into stack \n", value);
    }
}

void pop(){
    if(top == -1){
        printf("Stack underflow \n");
    }
    else{
        printf("%d deleted from stack \n",stack[top]);
        top--;
    }
    }

void peek(){
    if(top==-1){
        printf("Stack is empty \n");
    }
    else{
        printf("Top element is %d \n", stack[top]);
    }
}

void display(){
    if (top == -1){
        printf("stack is empty \n");
    }
    else{
        printf("stack elements are :\n");
        for(int i = top;i>=0;i--){
            printf("%d\n",stack[i]);
        }
    }
}
int main(){
    push(80);
    push(45);
    push(100);

    display();
    peek();
    pop();
    printf("After popping an element \n");
    display();

    return 0;
}


    