#include <stdio.h> 
#include <stdlib.h>

// Define a structure for a stack node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to push an element onto the stack
void push(struct Node** top, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *top; // Link the new node to the current top
    *top = newNode; // Update top to the new node
    printf("%d pushed onto stack\n", data);
}

// Function to pop an element from the stack
int pop(struct Node** top) {
    if (*top == NULL) {
        printf("Stack Underflow\n");
        return -1; // Return -1 to indicate an empty stack
    }
    struct Node* temp = *top; // Store the current top node
    int popped = temp->data; // Retrieve the data
    *top = (*top)->next; // Move the top to the next node
    free(temp); // Free the popped node
    return popped;
}

// Function to display the stack
void displayStack(struct Node* top) {
    if (top == NULL) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack: ");
    while (top) {
        printf("%d -> ", top->data);
        top = top->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* stack = NULL; // Initialize an empty stack

    // Push elements onto the stack
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    // Display the stack
    printf("Stack after pushes:\n");
    displayStack(stack);

    // Pop elements from the stack
    printf("%d popped from stack\n", pop(&stack));
    printf("%d popped from stack\n", pop(&stack));

    // Display the stack again
    printf("Stack after pops:\n");
    displayStack(stack);

    return 0;
}
