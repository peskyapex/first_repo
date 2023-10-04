#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Student {
    char name[50];
    int grade;
};

int main() {
    struct Student students[10] = {
        {"Student1", 0},
        {"Student2", 0},
        {"Student3", 0},
        {"Student4", 0},
        {"Student5", 0},
        {"Student6", 0},
        {"Student7", 0},
        {"Student8", 0},
        {"Student9", 0},
        {"Student10", 0}
    };

    srand(time(NULL));

    for(int i = 0; i < 10; i++) {

        students[i].grade = rand() % 40 + 60;
    }

    printf("\n");
    for(int i = 0; i < 10; i++) {
        printf("%s got grade %d\n", students[i].name, students[i].grade);
    }

    return 0;
}


