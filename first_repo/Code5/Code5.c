#include <stdio.h>

int main() {
    int hours;
    printf("Enter the number of hours: ");
    scanf("%d", &hours);

    int seconds = hours * 60 * 60;

    printf("%d hours is %d seconds\n", hours, seconds);

    return 0;
}


