#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_ROLLS 1000

int main() {
    srand(time(NULL));
    int rolls[NUM_ROLLS];
    int sum_tallies[11] = {0};

    for (int i = 0; i < NUM_ROLLS; i++) {
        rolls[i] = (rand() % 6) + (rand() % 6) + 2;
    }

    for (int i = 0; i < NUM_ROLLS; i++) {
        sum_tallies[rolls[i]-2]++;
    }

    for (int i = 0; i < 11; i++) {
        printf("%d appears %d times\n", i+2, sum_tallies[i]);
    }
    return 0;
}