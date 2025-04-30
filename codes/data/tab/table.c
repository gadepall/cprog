//code by GVV Sharma
//April 25 2025
//Generating a table using a C program
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PLAYERS 10
#define MAX_LINE 100
#define GAMES 4

typedef struct {
    char name;
    char scores[GAMES][20];  // To handle both numbers and "Did not play"
} Player;

void printTable(Player players[], int count) {
    printf("Player | Game 1       | Game 2       | Game 3       | Game 4\n");
    printf("-------+--------------+--------------+--------------+---------\n");

    for (int i = 0; i < count; i++) {
        printf("  %c    |", players[i].name);
        for (int j = 0; j < GAMES; j++) {
            printf(" %-12s |", players[i].scores[j]);
        }
        printf("\n");
    }
}

int main() {
    FILE *file = fopen("table.dat", "r");
    if (!file) {
        perror("Could not open file");
        return 1;
    }

    char line[MAX_LINE];

    // Skip header line
    fgets(line, sizeof(line), file);

    Player players[MAX_PLAYERS];
    int count = 0;

    while (fgets(line, sizeof(line), file)) {
        char *token = strtok(line, " \t\n");
        if (!token) continue;

        players[count].name = token[0];

        int gameIndex = 0;
        while ((token = strtok(NULL, " \t\n")) != NULL && gameIndex < GAMES) {
            if (strcmp(token, "Did") == 0) {
                // Expect "Did not play"
                strcpy(players[count].scores[gameIndex], "Did not play");
                // Skip next two tokens ("not" and "play")
                strtok(NULL, " \t\n");
                strtok(NULL, " \t\n");
            } else {
                strcpy(players[count].scores[gameIndex], token);
            }
            gameIndex++;
        }
        count++;
    }

    fclose(file);

    printTable(players, count);

    return 0;
}

