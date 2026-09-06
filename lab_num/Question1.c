#include <stdio.h>

int main() {
    int age;
    char name[100];
    char city[100];

    printf("Enter your name ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("Enter your age ");
    scanf("%d", &age);
    getchar();

    printf("Enter your city ");
    fgets(city, sizeof(city), stdin);
    city[strcspn(city, "\n")] = '\0';

    printf("\nName: %s\n", name);
    printf("Age: %d\n", age);
    printf("City: %s\n", city);

    return 0;
}
