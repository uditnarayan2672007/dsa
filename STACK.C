#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

// Push operation
void push(int value) {
    if(top == MAX - 1) {
        printf("Stack Overflow\n");
    } else {
        top++;
        stack[top] = value;
        printf("%d inserted into stack\n", value);
    }
}

// Pop operation
void pop() {
    if(top == -1) {
        printf("Stack Underflow\n");
    } else {
        printf("%d deleted from stack\n", stack[top]);
        top--;
    }
}

// Peek operation
void peek() {
    if(top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Top element is %d\n", stack[top]);
    }
}

// Display operation
void display() {
    int i;

    if(top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements are:\n");

        for(i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

int main() {

    push(10);
    push(20);
    push(30);

    display();

    peek();

    pop();

    display();

    return 0;
}