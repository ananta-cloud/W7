#ifndef STACK_H
#define STACK_H

typedef struct Stack {
    int* data;
    int top;
    int capacity;
} Stack;

Stack* createStack(int capacity);
void push(Stack* stack, int value);
int pop(Stack* stack);
int isEmpty(Stack* stack);

#endif // STACK_H