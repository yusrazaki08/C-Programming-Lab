#include <stdio.h>

int main() {
    char Name;
    int age;
    float height;
    char grade;
    float CGPA;

    printf("Enter student name: ");
    fgets(Name, sizeof(Name), stdin);
    Name[strcspn(Name, "\n")] = '\0';

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Height: ");
    scanf("%f", &height);

    printf("Enter Grade: ");
    scanf(" %c", &grade);

    printf("Enter CGPA: ");
    scanf("%f", &CGPA);

    printf("\n========= STUDENT REPORT =========\n\n");
    printf("Name: %s\n", Name);
    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);
    printf("Grade: %c\n", grade);
    printf("CGPA: %.2f\n", CGPA);

    return 0;
}

