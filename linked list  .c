#include <stdio.h>
#include <stdlib.h>

// Define the structure for a linked list node
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

// Function to append a node at the end
void append(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to add a node at the beginning
void addAtBeginning(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

// Function to insert a node after the first or second node
void insertAfterFirstTwo(struct Node* head, int data) {
    if (head == NULL || head->next == NULL) {
        printf("Not enough nodes to insert after.\n");
        return;
    }
    struct Node* temp = head->next; // Second node
    struct Node* newNode = createNode(data);
    newNode->next = temp->next;
    temp->next = newNode;
}

// Function to count nodes in the linked list
int countNodes(struct Node* head) {
    int count = 0;
    while (head) {
        count++;
        head = head->next;
    }
    return count;
}

// Function to calculate the sum of all nodes
int sumOfNodes(struct Node* head) {
    int sum = 0;
    while (head) {
        sum += head->data;
        head = head->next;
    }
    return sum;
}

// Function to display the linked list
void displayList(struct Node* head) {
    printf("Linked List: ");
    while (head) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    // 1) Append and display
    append(&head, 10);
    append(&head, 20);
    append(&head, 30);
    printf("After appending nodes:\n");
    displayList(head);

    // 2) Add at the beginning and display
    addAtBeginning(&head, 5);
    printf("After adding at the beginning:\n");
    displayList(head);

    // 3) Insert after the first two nodes and display
    insertAfterFirstTwo(head, 25);
    printf("After inserting after the first two nodes:\n");
    displayList(head);

    // 4) Count nodes and calculate sum
    int count = countNodes(head);
    int sum = sumOfNodes(head);
    printf("Total nodes: %d\n", count);
    printf("Sum of node data: %d\n", sum);

    return 0;
}
