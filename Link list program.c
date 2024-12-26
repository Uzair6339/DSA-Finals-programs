#include <stdio.h>
#include <stdlib.h> // Include for malloc

struct node {
    int data;
    struct node *link;
};

int main() {
    struct node *p, *temp, *r;
    p = NULL;
  
    // Create the first node
    temp = (struct node *)malloc(sizeof(struct node)); // Correct malloc usage
    temp->data = 10;
    temp->link = NULL;
    p = temp;

    // Create the second node
    temp = (struct node *)malloc(sizeof(struct node)); // Correct malloc usage
    temp->data = 20; // Assign data to the node
    temp->link = NULL; // Set link to NULL
    p->link = temp; // Link the first node to the second node

    // Create the third node
    temp = (struct node *)malloc(sizeof(struct node)); // Correct malloc usage
    temp->data = 30; // Assign data to the node
    temp->link = NULL; // Set link to NULL

    // Traverse to the last node and link the third node
    r = p; // Start from the first node
    while (r->link != NULL) {
        r = r->link; // Move to the next node
    }
    r->link = temp; // Link the third node

    // Print the list to verify
    r = p; // Start from the first node
    while (r != NULL) {
        printf("%d -> ", r->data);
        r = r->link; // Move to the next node
    }
    printf("NULL\n");

    return 0;
}
