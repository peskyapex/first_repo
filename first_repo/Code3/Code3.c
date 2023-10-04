#include <stdio.h>

int main() {
    char name[100];
    int age;
    char address[100];

    printf("Enter your full name: ");
    scanf("%99[^\n]", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your address: ");
    scanf(" %[^\n]", address);

    printf("\n--- Information ---\n");
    printf("Full Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Address: %s\n", address);

    return 0;
}
