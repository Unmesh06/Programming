#include <stdio.h>

struct node
{
    int data;
    struct node * next;
};


int main()
{
    struct node obj;

    printf("%lu\n",sizeof(obj));        // 16 bytes
    // 8 + 8
    // 4(int) + 4(padding) + 8(pointer)

    return 0;
}