#include <stdio.h>

void main()
{
    struct node
    {
        int data;
        struct node *link; // Corrected the declaration of the link pointer
    };

    struct node n;
    struct node *p; // Corrected the declaration of the pointer to struct node
    n.data = 10;
    n.link = NULL;
    p = &n;

    printf("Node data: %d\n", p->data); // Printing the node data for verification
    printf("Node link address: %p\n", (void*)p->link); // Printing the link address
    printf("Address of p: %p\n", (void*)&p); // Printing the address of the pointer p
}
