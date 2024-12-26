#include <stdio.h>

struct test {
    int data;   // Allocates 4 bytes on most platforms
    float m;    // Allocates 4 bytes on most platforms
};

void main() {
    struct test t;       // Declare a struct variable
    struct test *p;      // Declare a pointer to struct
    struct test t1;      // Declare another struct variable for copying

    // Initialize struct members
    t.data = 10;
    t.m = 2.56f;

    // Assign values of t to t1 (valid operation)
    t1 = t;

    // Set pointer to address of t
    p = &t;

    // Access members using the pointer
    int n = p->data;  // Access data member
    float q = p->m;   // Access m member

    // Print values
    printf("t.data = %d, t.m = %.2f\n", t.data, t.m);
    printf("t1.data = %d, t1.m = %.2f\n", t1.data, t1.m);
    printf("Pointer access: n = %d, q = %.2f\n", n, q);

    // Print addresses
    printf("Address of t.data: %p\n", (void*)&t.data);
    printf("Address of t.m: %p\n", (void*)&t.m);
    printf("Address stored in pointer p: %p\n", (void*)p);
    printf("Address of *(p->data): %p\n", (void*)&(p->data));
}
