#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

struct Stack {
    int arr[MAX_SIZE];
    int top;
};

void initialize(struct Stack* stack) {
    stack->top = -1;
}

int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

int isFull(struct Stack* stack) {
    return stack->top == MAX_SIZE - 1;
}

void push(struct Stack* stack, int value) {
    if (isFull(stack)) {
        printf("Stack Overflow\n");
        return;
    }
    stack->arr[++stack->top] = value;
}

int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow\n");
        return -1; // or any value indicating underflow
    }
    return stack->arr[stack->top--];
}

int main() {
    struct Stack stack;
    initialize(&stack);

    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 3);

    printf("Popped element: %d\n", pop(&stack));

    return 0;
}
