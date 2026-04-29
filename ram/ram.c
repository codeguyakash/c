#include <stdio.h>

int main() {
    int x = 1025;
    unsigned char *ptr = (unsigned char*)&x;

    for (int i = 0; i < sizeof(x); i++) {
        printf("Byte %d: %u\n", i, ptr[i]);
    }

    return 0;
}
// #include <stdio.h>

// int main() {
//     int a = 10;
//     int b = 20;

//     int *ptrA = &a;
//     int *ptrB = &b;

//     printf("Value of a: %d\n", a);
//     printf("Address of a: %p\n", &a);

//     printf("Value of b: %d\n", b);
//     printf("Address of b: %p\n", &b);

//     printf("\nUsing pointers:\n");
//     printf("ptrA points to address: %p with value: %d\n", ptrA, *ptrA);
//     printf("ptrB points to address: %p with value: %d\n", ptrB, *ptrB);

//     return 0;
// }