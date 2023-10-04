#include <stdio.h>

int main() {
    int numbers[3];
    int max, min;
    float avg = 0;

    printf("Enter three numbers (A, B, C): ");
    for(int i = 0; i < 3; i++) {
        scanf("%d", &numbers[i]);
    }

    max = min = numbers[0];
    for(int i = 0; i < 3; i++) {
        if(numbers[i] > max) {
            max = numbers[i];
        }
        if(numbers[i] < min) {
            min = numbers[i];
        }
        avg += numbers[i];
    }
    avg /= 3;

    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
    printf("Avg: %.2f\n", avg);

    return 0;
}
