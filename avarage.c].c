#include <stdio.h>

int main(void) {
    int sum = 0, average, score;

    for (int i = 0; i < 25; i++) {
        printf("Enter exam score: ");
        scanf("%d", &score);
        sum += score;
    }

    average = sum / 25;
    printf("Average exam score: %d\n", average);

    return 0;
}
