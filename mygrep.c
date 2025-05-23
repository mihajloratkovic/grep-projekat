#include <stdio.h>
#include <string.h>

#define MAX_LINE 1024

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Usage: %s <search_term> <filename>\n", argv[0]);
        return 1;
    }

    char *search = argv[1];
    char *filename = argv[2];
    FILE *fp = fopen(filename, "r");

    if (!fp) {
        perror("Error opening file");
        return 1;
    }

    char line[MAX_LINE];
    int line_number = 1;
    int count = 0; // Dodato: brojač pojavljivanja reči

    while (fgets(line, MAX_LINE, fp)) {
        if (strstr(line, search)) {
            printf("%d: %s", line_number, line);

            // Dodato: brojanje pojavljivanja u liniji
            char *ptr = line;
            while ((ptr = strstr(ptr, search)) != NULL) {
                count++;
                ptr += strlen(search);
            }
        }
        line_number++;
    }

    fclose(fp);

    // Dodato: ispis ukupnog broja pojavljivanja
    printf("\nUkupan broj pojavljivanja reči '%s': %d\n", search, count);

    return 0;
}


