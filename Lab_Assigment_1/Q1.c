#include <stdio.h>
#include <string.h>

#define ALPHABET_SIZE 26

void print_password(char password[]) {
    printf("%s\n", password);
}

void generate_passwords(char password[], int index, int used[]) {
    if (index == 4) {
        print_password(password);
        return;
    }

    for (int i = 0; i < ALPHABET_SIZE; i++) {
        if (!used[i]) {
            password[index] = 'a' + i;
            used[i] = 1;
            generate_passwords(password, index + 1, used);
            used[i] = 0;
        }
    }
}

int main() {
    char password[5];
    int used[ALPHABET_SIZE] = {0};

    generate_passwords(password, 0, used);

    return 0;
}