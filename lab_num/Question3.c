#include <stdio.h>

int main() {
    int age;
    char Grade;
    float height;

    printf("Enter age ");
    scanf("%d", &age);

    printf("Enter height ");
    scanf("%f", &height);

    printf("Enter Grade ");
    scanf(" %c", &Grade);

    printf("Age: %d\n", age);
    printf("Height: %f\n", height);
    printf("Grade: %c\n", Grade);

    return 0;
}

