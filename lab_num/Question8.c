#include <stdio.h>

int main() {
    char name[100];

    printf("Enter Name ");
    fgets(name, sizeof(name), stdin);

    printf("Hello,\n");
    printf("%s", name);

    return 0;
}

