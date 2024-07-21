#include <stdio.h>

#define MAX 100  //maximum size of the stack

int stack[MAX], choice, top = -1, x, i;

void push(void);
void pop(void);
void display(void);

int main() {
    printf("\n\tSTACK OPERATIONS USING ARRAY");
    printf("\n\t--------------------------------");
    printf("\n\t1. PUSH\n\t2. POP\n\t3. DISPLAY\n\t4. EXIT");

    do {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("\n\tEXIT POINT\n");
                break;
            default:
                printf("\n\tPlease enter a valid choice (1/2/3/4)\n");
                break;
        }
    } while (choice != 4);

    return 0;
}

void push() {
    if (top >= MAX - 1) {
        printf("\n\tSTACK is overflow\n");
    } else {
        printf("Enter a value to be pushed: ");
        scanf("%d", &x);
        stack[++top] = x;  
    }
}

void pop() {
    if (top < 0) {
        printf("\n\tSTACK is underflow\n");
    } else {
        printf("\n\tThe popped element is %d\n", stack[top--]);  
}

void display() {
    if (top >= 0) {
        printf("\nThe elements in STACK:\n");
        for (i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    } else {
        printf("\nThe STACK is empty\n");
    }
}
